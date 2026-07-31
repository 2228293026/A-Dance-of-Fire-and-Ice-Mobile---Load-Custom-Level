# A Dance of Fire and Ice Mobile - Load Custom Level

> 一个用于在移动端《A Dance of Fire and Ice》里加载自定义关卡的实验性项目。  
> An experimental project for loading custom levels in *A Dance of Fire and Ice* on mobile.

## 中文说明

### 项目简介
该项目基于 Android + JNI（C++）实现，对游戏行为进行注入/Hook，并通过**自定义文件选择器**（非系统选择器）加载本地自定义关卡文件（如 `.adofai` / `.zip`）。

### 主要功能
- 注入并替换/扩展原有关卡加载流程
- 通过自定义 `AlertDialog` 样式的文件浏览器选择关卡文件（不依赖系统 `ACTION_OPEN_DOCUMENT`）
- 提供 NDK 工程（`libOctober.so`）与对应的 Java 桥接类
- 其余 mod 功能（解锁关卡、自动游玩、隐藏 UI 等）均可通过 `ADOFAI-Mod-Info.json` 开关

### 项目结构
```
app/src/main/
├── java/com/
│   ├── unity3d/player/
│   │   ├── CustomFileChooser.java   # 自定义文件浏览器（原生 AlertDialog，无 androidx 依赖）
│   │   └── FileSelector.java        # 文件选择器静态门面（ActivityThread 反射拿 Activity + runOnUiThread）
│   └── adofai/mod/MainActivity.java # AIDE 空壳主界面（仅用于让 AIDE 识别为可编译工程）
└── jni/                             # 核心 C++/JNI + BNM hook 逻辑
    ├── Main.cpp                     # JNI_OnLoad 入口
    ├── FilePicker.cpp               # 文件选择器 hook + 运行时挂载 classes2.dex
    └── ...
```

关键文件：
- `app/src/main/jni/FilePicker.cpp`：Hook `SFB.StandaloneFileBrowser.OpenFilePanel`，并在运行时用 `DexClassLoader` 挂载 APK 内的 `classes2.dex`，从而定位文件选择器 Java 类
- `app/src/main/java/com/unity3d/player/*.java`：自定义文件选择器（Java 侧实现）
- `INSTRUCTIONS.md`：注入、打包与调试流程说明（当前已更新为新方案）

### 快速开始
1. 准备 Android NDK / SDK 与构建环境（或直接使用 AIDE / Termux）
2. 按 `INSTRUCTIONS.md` 编译 C++ 为 `libOctober.so`，编译 Java 为 `classes2.dex`
3. 将两者注入游戏 APK（替换 `lib/arm64-v8a/libOctober.so`，加入 `classes2.dex`）
4. 重打包签名并安装；进入游戏编辑器点击"打开关卡"即弹出自定义文件选择器

> **注入时无需修改游戏里的 `UnityPlayerActivity` / `onActivityResult`。**  
> 新版文件选择器通过 C++ 侧运行时挂载 dex 的方式加载 `com.unity3d.player.FileSelector`，
> 不再依赖系统的 `onActivityResult` 回调。

## 库

- BNM Library: https://github.com/ByNameModding/BNM-Android (official BNM repository)
- Dobby: https://github.com/jmpews/Dobby (inline hooking used by BNM)

### 免责声明
本项目仅用于学习与研究目的。请遵守目标软件的用户协议与当地法律法规，勿用于侵权或破坏性用途。

### 开源许可
本项目以 [MIT License](LICENSE) 发布。

---

## English

### Overview
This project uses Android + JNI (C++) to inject/hook game behavior and load local custom level files (for example, `.adofai`) through a **custom file picker** (not the system picker).

### Features
- Injects and extends/replaces the original level-loading flow
- Loads level files via a custom **AlertDialog-style file browser** (no dependency on system `ACTION_OPEN_DOCUMENT`)
- Provides an NDK project (`libOctober.so`) and the matching Java bridge classes
- Extra mod features (unlock levels, autoplay, hide UI, etc.) are toggleable via `ADOFAI-Mod-Info.json`

### Project layout
```
app/src/main/
├── java/com/
│   ├── unity3d/player/
│   │   ├── CustomFileChooser.java   # custom file browser (native AlertDialog, no androidx)
│   │   └── FileSelector.java        # file-picker facade (ActivityThread reflection + runOnUiThread)
│   └── adofai/mod/MainActivity.java # placeholder Activity for AIDE buildability
└── jni/                             # core C++/JNI + BNM hook logic
    ├── Main.cpp                     # JNI_OnLoad entry
    ├── FilePicker.cpp               # file-picker hook + runtime classes2.dex mounting
    └── ...
```

Key files:
- `app/src/main/jni/FilePicker.cpp`: hooks `SFB.StandaloneFileBrowser.OpenFilePanel` and mounts the APK's `classes2.dex` at runtime via `DexClassLoader` so it can find the file-picker Java class
- `app/src/main/java/com/unity3d/player/*.java`: the custom file picker (Java side)
- `INSTRUCTIONS.md`: injection, repackaging, and debugging guide (updated for the new approach)

### Quick start
1. Prepare Android NDK/SDK and build environment (or use AIDE / Termux)
2. Follow `INSTRUCTIONS.md` to build the C++ into `libOctober.so` and the Java into `classes2.dex`
3. Inject both into the game APK (replace `lib/arm64-v8a/libOctober.so`, add `classes2.dex`)
4. Repackage, sign, and install; open the level-editor "Open level" button to trigger the custom file picker

> **No need to modify `UnityPlayerActivity` / `onActivityResult` in the game.**  
> The new picker is loaded by mounting the dex at runtime from the C++ side, so it no longer
> relies on the system `onActivityResult` callback.

## Library

- BNM Library: https://github.com/ByNameModding/BNM-Android (official BNM repository)
- Dobby: https://github.com/jmpews/Dobby (inline hooking used by BNM)

### License
This project is released under the [MIT License](LICENSE).

### Disclaimer
This repository is for educational and research purposes only. Make sure your usage complies with software terms and local laws.
