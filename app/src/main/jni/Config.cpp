#include "Config.h"
#include <cstdio>
#include <sys/stat.h>
#include <fstream>
#include <sstream>
#include "Logger.h"

ModConfig g_modConfig;

static std::string trim(const std::string& s, const char* whitespace = " \t\n\r") {
    size_t start = s.find_first_not_of(whitespace);
    if (start == std::string::npos) return "";
    size_t end = s.find_last_not_of(whitespace);
    return s.substr(start, end - start + 1);
}

static bool parseConfig(const std::string& content) {
    try {
        std::istringstream iss(content);
        std::string line;
        while (std::getline(iss, line)) {
            line = trim(line);
            if (line.empty() || line.starts_with("//") || line.starts_with("#")) continue;

            size_t pos = line.find("\"");
            if (pos == std::string::npos) continue;
            size_t keyStart = pos + 1;
            size_t keyEnd = line.find("\"", keyStart);
            if (keyEnd == std::string::npos) continue;
            std::string key = line.substr(keyStart, keyEnd - keyStart);

            size_t colonPos = line.find(":", keyEnd);
            if (colonPos == std::string::npos) continue;
            size_t valueStart = colonPos + 1;
            while (valueStart < line.size() && (line[valueStart] == ' ' || line[valueStart] == '\t')) valueStart++;
            if (valueStart >= line.size()) continue;

            std::string valueStr = line.substr(valueStart);
            if (!valueStr.empty() && (valueStr.back() == ',' || valueStr.back() == '}')) {
                valueStr.pop_back();
            }
            valueStr = trim(valueStr);

            #define SET_BOOL(key_name, field) \
                if (key == key_name) g_modConfig.field = (valueStr == "true" || valueStr == "1")

            SET_BOOL("enableUnlockAllLevels", enableUnlockAllLevels);
            else SET_BOOL("enableTaroDlcCheck", enableTaroDlcCheck);
            else SET_BOOL("enableLoadLevel", enableLoadLevel);
            else SET_BOOL("enableNoMultipressPenalty", enableNoMultipressPenalty);
            else SET_BOOL("enableAutoPlay", enableAutoPlay);
            else SET_BOOL("enableHideCircles", enableHideCircles);
            else SET_BOOL("enableHidePauseButton", enableHidePauseButton);
            else SET_BOOL("enableHidePerfectHitText", enableHidePerfectHitText);
            else SET_BOOL("enableCustomUIHitTest", enableCustomUIHitTest);
            else SET_BOOL("enableCustomBundlesPath", enableCustomBundlesPath);
            else if (key == "bundlesLoadPath") g_modConfig.bundlesLoadPath = trim(valueStr, " \t\n\r\"");
            else SET_BOOL("enableDifficultyUIMode", enableDifficultyUIMode);
            #undef SET_BOOL
        }
        return true;
    } catch (...) {
        return false;
    }
}

static std::string GetPackageName() {
    char buf[256]{0};
    FILE* f = fopen("/proc/self/cmdline", "r");
    if (f) {
        fread(buf, 1, sizeof(buf) - 1, f);
        fclose(f);
    }
    return std::string(buf);
}

bool loadConfigFromFile() {
    std::string packageName = GetPackageName();
    if (packageName.empty()) {
        LOGW("Failed to get package name, using fallback path");
    }

    std::string configDir = "/sdcard/Android/data/" + packageName + "/files/ADOFAIMod";
    std::string configPath = configDir + "/ADOFAI-Mod-Info.json";

    std::ifstream file(configPath);
    if (!file.is_open()) {
        LOGW("Config file not found: %s, creating default config", configPath.c_str());

        mkdir(configDir.c_str(), 0755);

        std::ofstream outFile(configPath);
        if (outFile.is_open()) {
            outFile << "{\n";
            outFile << "  \"enableUnlockAllLevels\": true,\n";
            outFile << "  \"enableTaroDlcCheck\": true,\n";
            outFile << "  \"enableLoadLevel\": true,\n";
            outFile << "  \"enableNoMultipressPenalty\": true,\n";
            outFile << "  \"enableAutoPlay\": true,\n";
            outFile << "  \"enableHideCircles\": true,\n";
            outFile << "  \"enableHidePauseButton\": true,\n";
            outFile << "  \"enableHidePerfectHitText\": true,\n";
            outFile << "  \"enableCustomUIHitTest\": true,\n";
            outFile << "  \"enableCustomBundlesPath\": true,\n";
            outFile << "  \"bundlesLoadPath\": \"/sdcard/DLC/Bundles\",\n";
            outFile << "  \"enableDifficultyUIMode\": true,\n";
            outFile << "}\n";
            outFile.close();
            LOGD("Default config created at %s", configPath.c_str());
        } else {
            LOGE("Failed to create default config at %s", configPath.c_str());
        }
        return false;
    }

    std::ostringstream oss;
    oss << file.rdbuf();
    std::string content = oss.str();

    if (parseConfig(content)) {
        __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, "Mod configuration loaded from %s", configPath.c_str());
        return true;
    }
    return false;
}
