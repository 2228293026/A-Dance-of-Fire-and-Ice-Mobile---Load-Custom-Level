#ifndef CONFIG_H
#define CONFIG_H

#include <string>

struct ModConfig {
    // 核心功能
    bool enableUnlockAllLevels = true;
    bool enableTaroDlcCheck = true;
    bool enableLoadLevel = true;
    bool enableNoMultipressPenalty = true;
    bool enableAutoPlay = true;

    // UI 修改
    bool enableHideCircles = true;
    bool enableHidePauseButton = true;
    bool enableHidePerfectHitText = true;
    bool enableCustomUIHitTest = true;

    // 路径与难度
    bool enableCustomBundlesPath = true;
    std::string bundlesLoadPath = "/sdcard/DLC/Bundles";
    bool enableDifficultyUIMode = true;
};

extern ModConfig g_modConfig;

bool loadConfigFromFile();

#endif // CONFIG_H
