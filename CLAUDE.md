# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

This is an Android NDK project for modifying Unity games using IL2CPP hooking. The project uses BNM (ByNameModding) library to interact with Unity's IL2CPP runtime at runtime. It appears to be a mod/hack framework for the game "A Dance of Fire and Ice" (ADOFAI).

**Key Technology Stack:**
- Android NDK (arm64-v8a only)
- Gradle 7.0.2 with Android plugin
- C++20 with Dobby hooking library
- IL2Cpp manipulation via JNI
- Prefab-based native build system

## Project Structure

```
.
├── app/
│   ├── build.gradle          # App module Gradle config
│   └── src/main/
│       ├── AndroidManifest.xml  # Unity-based manifest with mod permissions
│       ├── jni/                 # Native C++ source code
│       │   ├── Android.mk      # NDK build configuration
│       │   ├── Application.mk  # NDK application settings
│       │   ├── Main.cpp        # JNI entry point and initialization
│       │   ├── BNM/            # BNM library (wrapper for IL2CPP structures)
│       │   │   ├── include/    # Public headers (1.6MB of IL2CPP structs)
│       │   │   └── src/        # Implementation (Class.cpp, Hooks.cpp, etc.)
│       │   ├── libraries/      # Prebuilt static libs (libdobby.a)
│       │   └── [Other modules] # Jipper/, mod/, modifer/, mui/, October/
│       ├── libs/               # Bundled native libraries (prebuilt .so files)
│       ├── obj/                # Build outputs (object files and .so files)
│       └── res/                # Android resources
├── build.gradle                # Root buildscript with repositories
├── settings.gradle             # Includes ':app' module
├── gradle.properties           # AndroidX disabled, prefab version
├── Assembly-CSharp_Dump.cs     # IL2CPP dump from target app (auto-generated)
└── UnityEngine.CoreModule_Dump.cs # IL2CPP Unity core dump (auto-generated)
```

## Build Commands

### Clean Build
```bash
./gradlew clean
```

### Build Debug APK
```bash
./gradlew assembleDebug
```

### Build Release APK
```bash
./gradlew assembleRelease
```

### Build Native Libraries Only (NDK-build)
```bash
cd app/src/main/jni
ndk-build
```

### Rebuild from scratch
```bash
rm -rf app/src/main/obj
./gradlew clean assembleDebug
```

### Install to Device (if device connected)
```bash
./gradlew installDebug
```

## Architecture

### Native Module System
The project is divided into multiple native modules that build into separate .so files:
- **libOctober.so** - Main module (currently being modified)
- **libJipper.so** - Additional functionality
- **libmod.so** - Game mods
- **libModifer.so** - Modifications/patches
- **libmui.so** - UI-related features

All modules share the BNM library codebase.

### BNM Library
BNM provides C++ wrappers for IL2CPP structures and runtime manipulation:
- `Class`, `Method`, `Field` - Reflection-like API for IL2CPP types
- `Hooks` - Function hooking infrastructure
- `Image` - Assembly/image management
- `Loading` - JNI-based IL2CPP initialization
- `UnityStructures` - UnityEngine type definitions

Header files are in `BNM/include/BNM/`, implementation in `BNM/src/`. The library is header-heavy with inline implementations.

### IL2CPP Dumps
The `*_Dump.cs` files are generated from the target application's IL2CPP binaries. They provide C# class definitions that mirror the actual game code, including:
- Namespaces (e.g., `ADOFAI`, `UnityEngine`)
- Class definitions with fields and methods
- Virtual addresses (VA) and RVA offsets

These dumps are used for reference when hooking into specific game functions. They should be regenerated when the target app updates.

### JNI Entry Point
`Main.cpp` implements `JNI_OnLoad` which:
1. Loads IL2CPP via `BNM::Loading::TryLoadByJNI`
2. Registers `start()` callback for when IL2CPP is ready
3. `start()` initializes `Image` objects for key assemblies and sets up hooks

### Build Configuration
- `Android.mk`: Defines module `October` linking `dobby` static lib and BNM sources
- `Application.mk`: ARM64 only, C++17/20, release optimization, PIE enabled
- `app/build.gradle`: Enables `prefab` for NDK integration

The project uses a hybrid approach: Gradle for APK packaging, ndk-build for native compilation.

## Common Development Tasks

### Modifying Native Code
1. Edit C++ files in `app/src/main/jni/`
2. Rebuild with `./gradlew assembleDebug` or `ndk-build`
3. The built `.so` files will appear in `app/src/main/obj/local/arm64-v8a/`
4. APK will be at `app/build/outputs/apk/debug/app-debug.apk`

### Adding a New Hook
1. Include appropriate BNM headers (`BNM/include/BNM/`)
2. Use `Class`, `Method`, `Field` templates to access IL2CPP types
3. Set up hooks in the `start()` function
4. Use `BasicHook` or `DobbyHook` from BNM's `Hooks.cpp`

Example pattern:
```cpp
auto method = Class("Namespace", "ClassName").GetMethod("MethodName");
BasicHook(method, MyReplacement, oldOriginal);
```

### Updating IL2CPP Dumps
When the target app is updated, regenerate the dumps using your preferred IL2CPP dumper (e.g., Il2CppDumper). Replace `Assembly-CSharp_Dump.cs` and `UnityEngine.CoreModule_Dump.cs`.

### Debugging
- Logging uses `__android_log_print` with tags `IL2CPP_EXPORTS` (from `Main.cpp`)
- BNM has its own debug messages controlled by `DebugMessages.hpp`
- Check Logcat output: `adb logcat -s IL2CPP_EXPORTS`

### Working with Multiple Modules
- Each module in `app/src/main/jni/` that has its own subdirectory (October, modifer, etc.) may need its own `Android.mk` if building separately
- Currently all modules are built via ndk-build with a single `Android.mk` that only builds `October`
- To build other modules, modify `Android.mk` or create separate build configurations

## Important Notes

- **Architecture**: Only arm64-v8a is configured (`APP_ABI = arm64-v8a`). Adding other ABIs requires updating `Application.mk` and providing appropriate libraries.
- **Minimum API**: android-23 (APP_PLATFORM), but manifest declares minSdk 19. The actual minimum is 23 due to NDK build settings.
- **Premature Optimization**: NDK build uses `-O2` (release) by default. Debug builds require changing `APP_OPTIM` in `Application.mk`.
- **Dependencies**: BNM library is self-contained except for `libdobby.a` (prebuilt) and system libraries (`-llog`).
- **Unity Version**: The IL2CppHeaders in `BNM/include/BNM/Il2CppHeaders/` support Unity 2017.1 through 2021.2. Match the target app's Unity version.
- **Gradle Wrapper**: The `gradle/wrapper/gradle-wrapper.jar` may be missing. If so, regenerate or use system Gradle: `gradle assembleDebug`.

## What to Avoid

- Do not commit modified dump files (`*_Dump.cs`) without verifying they match the released game version.
- The `app/src/main/obj/` directory should not be committed (large binary outputs).
- Avoid changing `app/src/main/libs/` unless distributing prebuilt libraries.
