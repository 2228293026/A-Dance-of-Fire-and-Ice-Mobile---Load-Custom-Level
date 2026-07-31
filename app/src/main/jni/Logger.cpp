#include "Logger.h"
#include <android/log.h>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <atomic>
#include <thread>
#include <chrono>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cstdio>

static std::queue<std::string> g_logQueue;
static std::mutex g_queueMutex;
static std::condition_variable g_queueCV;
static std::atomic<bool> g_logThreadRunning{false};
static std::thread g_logThread;
static const std::string g_logPath = "/sdcard/adofai_mod.log";

void LogWriterThread() {
    std::ofstream logFile(g_logPath, std::ios::trunc);
    if (!logFile.is_open()) return;

    while (g_logThreadRunning.load()) {
        std::unique_lock<std::mutex> lock(g_queueMutex);
        g_queueCV.wait(lock, []{ return !g_logQueue.empty() || !g_logThreadRunning; });

        std::queue<std::string> localQueue;
        std::swap(localQueue, g_logQueue);
        lock.unlock();

        while (!localQueue.empty()) {
            logFile << localQueue.front();
            localQueue.pop();
        }
        logFile.flush();
    }

    {
        std::lock_guard<std::mutex> lock(g_queueMutex);
        while (!g_logQueue.empty()) {
            logFile << g_logQueue.front();
            g_logQueue.pop();
        }
    }
    logFile.flush();
    logFile.close();
}

void StartLogging() {
    g_logThreadRunning = true;
    g_logThread = std::thread(LogWriterThread);
}

void StopLogging() {
    g_logThreadRunning = false;
    g_queueCV.notify_all();
    if (g_logThread.joinable()) {
        g_logThread.join();
    }
}

void LogToFile(const char* format, ...) {
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;

    std::ostringstream oss;
    oss << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S");
    oss << '.' << std::setfill('0') << std::setw(3) << ms.count();
    oss << ' ';

    char buffer[1024];
    va_list args;
    va_start(args, format);
    vsnprintf(buffer, sizeof(buffer), format, args);
    va_end(args);

    oss << buffer << '\n';

    {
        std::lock_guard<std::mutex> lock(g_queueMutex);
        g_logQueue.push(oss.str());
    }
    g_queueCV.notify_one();
}
