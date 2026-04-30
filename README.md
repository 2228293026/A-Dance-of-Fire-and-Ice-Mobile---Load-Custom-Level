# A Dance of Fire and Ice Mobile - Load Custom Level

> 一个用于在移动端《A Dance of Fire and Ice》里加载自定义关卡的实验性项目。  
> An experimental project for loading custom levels in *A Dance of Fire and Ice* on mobile.

## 中文说明

### 项目简介
该项目基于 Android + JNI（C++）实现，对游戏行为进行注入/Hook，并通过文件选择器加载本地自定义关卡文件（如 `.adofai`）。

### 主要功能
- 注入并替换/扩展原有关卡加载流程
- 支持通过文件选择器选择自定义关卡文件
- 提供 NDK 工程与相关 JNI 代码

### 项目结构（简要）
- `app/src/main/jni/`：核心 C++/JNI 逻辑
- `FilePicker.java`：文件选择器桥接代码
- `INSTRUCTIONS.md`：注入、打包与调试流程说明

### 快速开始
1. 准备 Android NDK / SDK 与构建环境
2. 根据 `INSTRUCTIONS.md` 完成 Java 编译、DEX 注入与 APK 重打包
3. 编译 JNI 库并替换目标 APK 中对应 `.so`
4. 安装并测试文件选择与关卡加载流程

## 库

- BNM Library: https://github.com/ByNameModding/BNM-Android (official BNM repository)
- Dobby: https://github.com/jmpews/Dobby (inline hooking used by BNM)

### 免责声明
本项目仅用于学习与研究目的。请遵守目标软件的用户协议与当地法律法规，勿用于侵权或破坏性用途。

---

## English

### Overview
This project uses Android + JNI (C++) to inject/hook game behavior and load local custom level files (for example, `.adofai`) through a file picker.

### Features
- Injects and extends/replaces the original level-loading flow
- Supports selecting custom level files via Android file picker
- Includes NDK project setup and JNI implementation

### Project layout (brief)
- `app/src/main/jni/`: core C++/JNI logic
- `FilePicker.java`: file-picker bridge code
- `INSTRUCTIONS.md`: injection, repackaging, and debugging guide

### Quick start
1. Prepare Android NDK/SDK and build environment
2. Follow `INSTRUCTIONS.md` for Java build, DEX injection, and APK repackaging
3. Build JNI libraries and replace target `.so` files in APK
4. Install and verify file picker + custom level loading flow

## Library

- BNM Library: https://github.com/ByNameModding/BNM-Android (official BNM repository)
- Dobby: https://github.com/jmpews/Dobby (inline hooking used by BNM)


### Disclaimer
This repository is for educational and research purposes only. Make sure your usage complies with software terms and local laws.
