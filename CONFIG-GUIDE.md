# ADOFAI Mod 配置指南

## 配置文件位置

配置文件路径（自动获取包名）：  
`/sdcard/Android/data/<游戏包名>/files/ADOFAIMod/ADOFAI-Mod-Info.json`

模组会自动从 `/proc/self/cmdline` 读取当前进程包名，无需手动修改。  
例如，如果游戏包名是 `com.fizzd.connectedworlds295`，配置文件应放在：  
`/sdcard/Android/data/com.fizzd.connectedworlds295/files/ADOFAIMod/ADOFAI-Mod-Info.json`

如果该文件不存在，模组将使用默认值（所有功能开启）。

## 配置文件结构

```json
{
  "enableUnlockAllLevels": true,
  "enableTaroDlcCheck": true,
  "enableLoadLevel": true,
  "enableNoMultipressPenalty": true,
  "enableAutoPlay": true,
  "enableHideCircles": true,
  "enableHidePauseButton": true,
  "enableHidePerfectHitText": true,
  "enableCustomUIHitTest": true,
  "enableCustomBundlesPath": true,
  "bundlesLoadPath": "/sdcard/DLC/Bundles",
  "enableDifficultyUIMode": true
}
```

## 功能开关说明

### 核心功能

| 配置项 | 默认值 | 说明 |
|--------|--------|------|
| `enableUnlockAllLevels` | `true` | 解锁所有关卡（RDC.forceUnlockAllLevels 返回 true） |
| `enableTaroDlcCheck` | `true` | 绕过 Taro DLC 检查（LevelEventInfo.taroDLCCheck 返回 true） |
| `enableLoadLevel` | `true` | 在设置菜单显示"载入关卡"按钮（ADOBase.isUnityEditor 返回 true） |
| `enableNoMultipressPenalty` | `true` | 禁用多点触控惩罚（scrPlanet.GetMultipressPenalty 返回 false） |
| `enableAutoPlay` | `true` | 启用 Otto 自动播放按钮显示和颜色逻辑 |

### UI 修改

| 配置项 | 默认值 | 说明 |
|--------|--------|------|
| `enableHideCircles` | `true` | 隐藏所有音符圆圈（scrRing.Update 设置缩放为 0） |
| `enableHidePauseButton` | `true` | 隐藏暂停按钮（scrUIController.Update） |
| `enableHidePerfectHitText` | `true` | 隐藏 Perfect 判定文字（ShowHitText 跳过 Perfect 显示） |
| `enableCustomUIHitTest` | `true` | 使用自定义 UI 点击检测逻辑（IsScreenPointInsideUIElements 使用 EventSystem Raycast） |

### 路径与难度配置

| 配置项 | 默认值 | 说明 |
|--------|--------|------|
| `enableCustomBundlesPath` | `true` | 启用自定义 DLC 包路径 |
| `bundlesLoadPath` | `"/sdcard/DLC/Bundles"` | DLC 包搜索目录（支持自定义关卡文件） |
| `enableDifficultyUIMode` | `true` | 启用难度显示模式覆盖 |

## 使用示例

### 示例 1：禁用 UI 修改，保留核心功能
```json
{
  "enableUnlockAllLevels": true,
  "enableTaroDlcCheck": true,
  "enableLoadLevel": true,
  "enableNoMultipressPenalty": true,
  "enableAutoPlay": true,
  "enableHideCircles": false,
  "enableHidePauseButton": false,
  "enableHidePerfectHitText": false,
  "enableCustomUIHitTest": true,
  "enableCustomBundlesPath": true,
  "bundlesLoadPath": "/sdcard/DLC/Bundles",
  "enableDifficultyUIMode": true
}
```


### 示例 2：最小配置（仅开启文件选择器支持）
```json
{
  "enableUnlockAllLevels": false,
  "enableTaroDlcCheck": false,
  "enableLoadLevel": false,
  "enableNoMultipressPenalty": false,
  "enableAutoPlay": false,
  "enableHideCircles": false,
  "enableHidePauseButton": false,
  "enableHidePerfectHitText": false,
  "enableCustomUIHitTest": false,
  "enableCustomBundlesPath": true,
  "bundlesLoadPath": "/sdcard/DLC/Bundles",
  "enableDifficultyUIMode": false
}
```

## 创建配置文件

1. 根据游戏包名创建配置目录并复制示例文件：
```bash
# 先确认游戏包名（例如 com.fizzd.connectedworlds295）
mkdir -p /sdcard/Android/data/com.fizzd.connectedworlds295/files/ADOFAIMod
cp ADOFAI-Mod-Info.json.example /sdcard/Android/data/com.fizzd.connectedworlds295/files/ADOFAIMod/ADOFAI-Mod-Info.json
```

2. 使用文本编辑器修改配置文件（路径见上方，根据实际包名）

3. 重启游戏使配置生效（或重新安装修改后的 APK）

## 注意事项

- 配置文件为标准的 JSON 格式，注意语法正确性
- 所有布尔值必须为 `true` 或 `false`（小写）
- 字符串必须使用双引号
- 配置文件不存在或解析失败时，所有功能默认开启
- 修改配置后需要重启游戏才能生效

## 调试日志

启用 Logcat 查看模组加载日志：
```bash
adb logcat -s IL2CPP_EXPORTS
```

配置加载成功会看到：
```
D/IL2CPP_EXPORTS: Mod configuration loaded from /sdcard/ADOFAI-Mod-Info.json
```

未找到配置时会看到：
```
W/IL2CPP_EXPORTS: Config file not found: /sdcard/ADOFAI-Mod-Info.json, using defaults
```

## 默认行为

不提供配置文件时，模组行为与之前的版本完全一致：
- 所有功能开关默认开启
- DLC 路径为 `/sdcard/DLC/Bundles`
- 难度显示模式为 `ShowAll`
