#ifndef LOGGER_H
#define LOGGER_H

#include <android/log.h>
#include <string>

#define LOG_TAG "IL2CPP_EXPORTS"
#define LOGD(...) do { __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGE(...) do { __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)
#define LOGW(...) do { __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__); LogToFile(__VA_ARGS__); } while(0)

void StartLogging();
void StopLogging();
void LogToFile(const char* format, ...);

#endif // LOGGER_H
