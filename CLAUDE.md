# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with this repository.

## Project Overview

This is an Android NDK mod for *A Dance of Fire and Ice Mobile* that enables loading custom levels via file picker. The project uses BNM (ByNameModding) library to hook into Unity's IL2CPP runtime at runtime.

**Key Technologies:**
- Android NDK (arm64-v8a only, API 23+)
- C++20 with Dobby hooking library (via BNM)
- IL2CPP manipulation through JNI
- Shadowhook for native method interception

**Build System:**
- **NDK-build only** (no Gradle). Uses `Android.mk` and `Application.mk`.
- Produces `libOctober.so` for arm64-v8a.

**Purpose:**
- Inject custom code into the game's IL2CPP runtime
- Replace/extend level loading to support custom `.adofai` files
- Provide Android file picker integration via JNI

## Repository Structure

```
.
├── app/
│   └── src/main/
│       ├── jni/                 # Native C++ source code (main module)
│       │   ├── Android.mk      # NDK build configuration (builds libOctober.so)
│       │   ├── Application.mk  # NDK settings (arm64-v8a, C++20, release)
│       │   ├── Main.cpp        # JNI entry point, all hook implementations
│       │   ├── universe.h     # Umbrella header including all BNM headers
│       │   ├── BNM/            # BNM library (IL2CPP wrapper)
│       │   │   ├── include/BNM/    # Public headers
│       │   │   │   ├── Class.hpp, Method.hpp, Field.hpp, Image.hpp, etc.
│       │   │   │   ├── Il2CppHeaders/  # Unity version-specific structs (2017-2023)
│       │   │   │   └── BasicMonoStructures.hpp  # Mono array, string, list wrappers
│       │   │   └── src/         # BNM implementation (.cpp files)
│       │   ├── libraries/      # Prebuilt static libs (libdobby.a)
│       │   ├── Enum/           # Game-specific enums (HitMargin, HitboxType, etc.)
│       │   └── ByNameModding/  # Legacy BNM headers (avoid using)
│       ├── AndroidManifest.xml  # declares mod permissions and JNI interface
│       ├── libs/               # Place .so files here for packaging
│       ├── obj/                # Build outputs (intermediates, .so files)
│       └── res/                # Android resources (if needed)
├── Dump/                       # IL2CPP dumps from target game (auto-generated)
│   ├── Assembly-CSharp_Dump.cs
│   └── UnityEngine.CoreModule_Dump.cs
├── README.md                   # Project overview (bilingual)
├── INSTRUCTIONS.md             # Detailed build & injection guide
├── CONFIG-GUIDE.md            # Configuration file format and options
└── CLAUDE.md                   # This file
```

## Common Development Tasks

### Build Native Library (NDK)
```bash
cd app/src/main/jni
ndk-build                    # Release build (default)
ndk-build -j$(nproc)        # Parallel build
ndk-build clean             # Clean build artifacts
ndk-build V=1              # Verbose output for debugging
```

Output library: `app/src/main/libs/arm64-v8a/libOctober.so`

### Build with Debug Info
Edit `app/src/main/jni/Application.mk`:
```makefile
APP_OPTIM = debug
```
Then rebuild: `ndk-build`

### Build from Scratch
```bash
cd app/src/main/jni
rm -rf ../../obj ../../libs
ndk-build -j$(nproc)
```

### Rebuild After Source Changes
All C++ changes require `ndk-build` before testing.

### View Build Logs
If build fails, check:
- `Android.mk` for missing source files
- `Application.mk` for ABI/platform mismatches
- NDK path and toolchain availability

### Debug with Logcat
Monitor mod logs during runtime:
```bash
adb logcat -s IL2CPP_EXPORTS
```

### Test Changes (Manual)
1. Build `.so`: `ndk-build`
2. Inject into game APK (see INSTRUCTIONS.md)
3. Install APK: `adb install -r your_modified_apk.apk`
4. Launch game, enter editor
5. Trigger file picker
6. Select `.adofai` file
7. Verify level loads without crash
8. Check Logcat for debug messages

### IL2CPP Dump Reference
IL2CPP dumps in `Dump/` directory show class structures, method signatures, and field offsets. Use to find hook targets.

**Important:** Do NOT commit modified dumps unless they match the current game version exactly.

## Architecture

### Module Structure
**libOctober.so**: Single native module containing:
- All BNM source files (`BNM/src/*.cpp`)
- Mod source files (`Main.cpp`, `Cache.cpp`, `Hooks.cpp`, etc.)
- Static library: `libdobby.a` (hooking)

**JNI Entry Point**:
- `JNI_OnLoad` → `BNM::Loading::TryLoadByJNI()` → `start()` callback
- Exported: `Java_com_mod_filepicker_FilePicker_nativeOnFileSelected`
- All hooks installed in `start()`

### Hook Implementation Pattern
```cpp
// 1. Declare original function pointer
ReturnType (*old_MethodName)(ParamTypes);

// 2. Hook function (in Hooks.cpp)
ReturnType Hooked_MethodName(ParamTypes) {
    if (old_MethodName) old_MethodName(args);  // call original if needed
    // Custom logic here
    LOGD("Hook called");
}

// 3. Cache Method object in InitModCache()
g_methodCache = Class("Namespace", "ClassName").GetMethod("MethodName");

// 4. Install hook in start()
if (g_methodCache.IsValid()) {
    BasicHook(g_methodCache, Hooked_MethodName, old_MethodName);
}
```

### Current Hook Features (Main.cpp)

**File Picker Integration:**
- Hooks `StandaloneFileBrowser.OpenFilePanel`
- Returns selected `.adofai` path as C# `string[]`
- Uses Android SAF (Storage Access Framework)

**Gameplay Modifications:**
- Force `ADOBase.get_isMobile` → `true` (mobile mode)
- Hide pause button (scrUIController.Update)
- Hide all hit text except non-Perfect (ShowHitText)
- Scale circles to zero (scrRing.Update)

**Level Loading:**
- `GCNS.get_BundlesLoadPath` → `/sdcard/DLC/Bundles`
- Bypass DLC restrictions

**Feature Flags:**
- `RDC.forceUnlockAllLevels` → `true`
- `LevelEventInfo.taroDLCCheck` → `true`
- `LevelEventInfo.isActive` → `false` (editor detection)
- `scrPlanet.GetMultipressPenalty` → `false`

### Global Cache System
All reflection lookups cached in `InitModCache()`:
- `g_*Method`: `BNM::Method<>` objects
- `g_*Field`: `BNM::Field<>` objects
- `g_*Property`: `BNM::Property<>` objects
- `g_*Class`: `BNM::Class` objects

This avoids repeated expensive lookups at runtime.

### Namespace Usage

**Code convention**: Use `using namespace` to reduce code size and improve readability:

```cpp
using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// Instead of:
// BNM::Class myClass = BNM::Class("Namespace", "ClassName");
// Use:
// Class myClass = Class("Namespace", "ClassName");
```

All source files follow this pattern in headers and implementation files.

## Troubleshooting

### Build Errors

**"Cannot find -ldobby"**
- Verify `app/src/main/jni/libraries/arm64-v8a/libdobby.a` exists
- Check `Android.mk` `LOCAL_STATIC_LIBRARIES` configuration

**"Class not found" at runtime**
- Check IL2CPP dump for exact namespace (empty string `""` for some classes)
- Verify class name case-sensitivity
- Ensure IL2CPP is fully loaded before hooking (hooks installed in `start()`)

**Hook not firing**
- Verify `method.IsValid()` before `BasicHook`
- `old_Method` pointer will be null if method not virtual or already hooked
- Check Logcat for `LOGD` messages in `start()`

**Crash when calling `old_Method`**
Guard calls:
```cpp
if (old_Method) old_Method();
```

### Runtime Issues

**No logs in Logcat**
Tag is `IL2CPP_EXPORTS`. Use:
```bash
adb logcat -s IL2CPP_EXPORTS:I
```

**File picker not appearing**
- Verify `FilePicker.java` compiled into DEX and injected
- Check `UnityPlayerActivity.onActivityResult` forwarding
- Verify JNI function `nativeOnFileSelected` is called

**Level fails to load**
- Check file path is correct in logs
- Verify `/sdcard/DLC/Bundles` exists and contains `level.adofai`
- Check game's `IL2CPP` dump for expected method signatures

## Code Style

- **Namespaces**: All mod files use `using namespace BNM;`, `using namespace BNM::Structures::Mono;`, `using namespace BNM::Structures::Unity;` to minimize repetitive prefixes
- **C++20**: constexpr, auto, structured bindings allowed
- **Globals**: Prefix with `g_` (e.g., `g_logThread`, `g_stringClass`)
- **Hook functions**: `ReturnType Hooked_OriginalName(...)`
- **Original pointers**: `ReturnType (*old_OriginalName)(Params);`
- **Logging**: `LOGD` (debug), `LOGW` (warn), `LOGE` (error)

## Adding New Hooks

1. **Declare** in `Hooks.h`:
```cpp
extern void (*old_TargetMethod)(Params);
void Hooked_TargetMethod(Params);
```

2. **Implement** in `Hooks.cpp`:
```cpp
void (*old_TargetMethod)(Params) = nullptr;

void Hooked_TargetMethod(Params) {
    if (old_TargetMethod) old_TargetMethod();
    // Your logic
}
```

3. **Cache** Method object in `Cache.cpp` `InitModCache()`:
```cpp
g_targetMethod = Class("Namespace", "ClassName").GetMethod("MethodName", {params});
```

4. **Install** hook in `Main.cpp` `start()`:
```cpp
if (g_targetMethod.IsValid()) {
    BasicHook(g_targetMethod, Hooked_TargetMethod, old_TargetMethod);
}
```

5. **Add logging** for debugging.

## References

- **BNM Library**: https://github.com/ByNameModding/BNM-Android
- **Dobby Hooking**: https://github.com/jmpews/Dobby
- **IL2CPP Dump Tools**: Il2CppDumper, Il2CppInspector
- Project `INSTRUCTIONS.md`: Full injection and repackaging guide
- Project `CONFIG-GUIDE.md`: Configuration file format and options

## Environment Setup

- Android NDK r29+ (64-bit Windows/Linux/macOS)
- Android SDK (for building Java code and APK tools)
- Java Development Kit (JDK 11+)
- Build tools: `apktool`, `d8`/`dx`, `zipalign`, `apksigner`/`jarsigner`

See `INSTRUCTIONS.md` for detailed setup steps.

## Important Notes

- **Architecture**: Only arm64-v8a (`APP_ABI = arm64-v8a` in Application.mk)
- **Minimum API**: 23 (APP_PLATFORM)
- **Build mode**: Release (`-O2`, stripped) by default. Debug builds require `APP_OPTIM = debug`.
- **Dependencies**: `libdobby.a` (prebuilt static library), `-llog` for Android logging
- **Unity version**: BNM headers support Unity 2017.1–2021.2. Verify target game version.
- **Thread safety**: `LogToFile` uses mutex; JNI attach/detach is per-thread (use `BNM::AttachIl2CPP()` in non-JNI threads)

## What to Avoid

- **Do NOT commit** generated IL2CPP dumps unless verified for the current game version.
- **Do NOT commit** build outputs: `app/src/main/obj/`, `.so` files.
- **Do NOT modify** `app/src/main/libs/` unless redistributing prebuilt libraries.
- **Avoid raw IL2CPP API** (`il2cpp_*`); always use BNM wrappers.
- **Do NOT skip using namespace declarations** - they reduce binary size and improve code clarity.
