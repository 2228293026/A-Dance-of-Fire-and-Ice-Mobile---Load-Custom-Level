# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working on this repository.

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
└── CLAUDE.md                   # This file
```

## Build Commands

### Build Native Library Only (ndk-build)
```bash
cd app/src/main/jni
ndk-build
```
Output: `app/src/main/obj/local/arm64-v8a/libOctober.so`

### Clean Native Build
```bash
cd app/src/main/jni
ndk-build clean
# or remove build outputs:
rm -rf ../../obj
```

### Rebuild from Scratch
```bash
cd app/src/main/jni
ndk-build clean && ndk-build -j$(nproc)
```

### Build with Debug Info
Edit `app/src/main/jni/Application.mk`:
```makefile
APP_OPTIM = debug
```
Then run `ndk-build`.

### Verbose Build (See all commands)
```bash
ndk-build V=1
```

## Architecture

### Single Module
- **libOctober.so**: Main native module built from `Main.cpp` and BNM sources.
  - Exported JNI function: `Java_com_mod_filepicker_FilePicker_nativeOnFileSelected`
  - Initialized via `JNI_OnLoad` → `BNM::Loading::TryLoadByJNI` → `start()`
  - All hooks installed in `start()`

### BNM Library
BNM provides type-safe C++ wrappers around IL2CPP APIs:
- `Class`, `Method`, `Field`, `Property` - Reflection-like API
- `Image` - Assembly/module management
- `BasicHook` - Simple function hook using Dobby
- `CreateMonoString()` - Create C# strings
- `Defaults::Get<T>()` - Get cached class for primitive/types

Headers: `BNM/include/BNM/`
Implementation: `BNM/src/*.cpp` (compiled into libOctober.so)

### Hook Pattern
```cpp
// 1. Declare function pointer for original
ReturnType (*old_MethodName)(ParamTypes);

// 2. Replacement function
ReturnType Hooked_MethodName(ParamTypes) {
    if (old_MethodName) old_MethodName(args);  // optional: call original
    // Custom logic here
}

// 3. In start(): install hook
auto method = Class("Namespace", "ClassName").GetMethod("MethodName");
if (method.IsValid()) {
    BasicHook(method, Hooked_MethodName, old_MethodName);
}
```

### Current Mod Features (Main.cpp)
- **File picker hook**: `StandaloneFileBrowser.OpenFilePanel` → returns selected `.adofai` path as `string[]`
- **Scene detection**: `ADOBase.get_isMobile` → force-return `true` (treat as mobile)
- **UI patches**: Hide pause button, scale circles to zero
- **Level loading bypass**: `GCNS.get_BundlesLoadPath` → return `/sdcard/DLC/Bundles`
- **Feature flags**: Disable `useNoFail`, unlock all levels, skip DLC checks
- **Editor detection**: Always return `false` for `LevelEventInfo.get_isActive` and `get_taroDLCCheck`

### Global Cache System
`InitModCache()` initializes all frequently-used `g_*` `Method`/`Field`/`Property` objects once at startup to avoid repeated lookups.

## Development Workflow

### Adding a New Hook
1. Add forward declaration at top (function pointer + hook function)
2. Write hook function with correct signature (match original from IL2CPP dump)
3. In `InitModCache()` or `start()`, obtain `Method` via `Class(...).GetMethod(...)`
4. Call `BasicHook(method, YourHook, old_YourMethod)` in `start()`
5. Add logging (LOGD/LOGE) for debugging

### Rebuilding After Changes
```bash
cd app/src/main/jni && ndk-build -j$(nproc)
```
The `.so` will be at: `app/src/main/obj/local/arm64-v8a/libOctober.so`

### Debugging Hooks
- Check Logcat: `adb logcat -s IL2CPP_EXPORTS`
- Add `LOGD("Hook called")` at start of each hook
- Verify `Method.IsValid()` before hooking
- Check that `old_Method` is non-null before calling

### Common Pitfalls
- **Class names are case-sensitive**: `"ADOBase"` not `"ADObase"`
- **Method signatures must match exactly**: number and types of parameters
- **JNI thread attachment**: Call `BNM::AttachIl2CPP()` if calling BNM from non-JNI thread
- **String handling**: Use `BNM::CreateMonoString()` for creating C# strings
- **Arrays**: Use `g_stringClass.NewArray<String*>(size)` and set via `array->m_Items[i]`

### Working with IL2CPP Dumps
The `Dump/*_Dump.cs` files are reference code generated by Il2CppDumper. They show:
- Class hierarchies
- Method signatures with virtual addresses
- Field offsets

Use them to find method names and signatures. Do NOT commit modified dumps unless they match the current game version.

## BNM Quick Reference

### Type Aliases (using namespace BNM::Structures::Mono)
- `String*` → C# `string`
- `Array<T>*` → C# `T[]`
- `List<T>*` → C# `List<T>`

### Commonly Used BNM Types
```cpp
BNM::Class                    // IL2CPP class wrapper
BNM::Method<Ret(Params...)>   // Method wrapper with return/param types
BNM::Field<T>                 // Field wrapper
BNM::Property<T>              // Property wrapper
BNM::Image                    // Assembly/image wrapper
BNM::CreateMonoString(str)    // Create C# string
BNM::Defaults::Get<T>()       // Get cached class for primitive/types
```

### Example: Field Access
```cpp
static Field<bool> g_someFlag;
g_someFlag = Class("", "SomeClass").GetField("someFlag");
bool value = g_someFlag[instance].Get();
g_someFlag[instance].Set(true);
```

### Example: Method Call
```cpp
static Method<int, String*> g_getScore;
g_getScore = Class("", "GameManager").GetMethod("get_score", {"levelName"});
int score = g_getScore[instance].Call("Level01");
```

## Testing

Currently no automated tests. Manual testing:
1. Build `.so`: `cd app/src/main/jni && ndk-build`
2. Package into APK (follow INSTRUCTIONS.md)
3. Install to device: `adb install -r your_modified_apk.apk`
4. Launch game, enter editor
5. Trigger file picker
6. Select a `.adofai` file
7. Verify level loads without crash
8. Check Logcat: `adb logcat -s IL2CPP_EXPORTS`

## Important Notes

- **Architecture**: Only arm64-v8a (`APP_ABI = arm64-v8a` in Application.mk)
- **Minimum API**: 23 (APP_PLATFORM). Manifest may claim lower, but NDK enforces 23.
- **Build mode**: Release (`-O2`) by default. For debugging, change `APP_OPTIM = debug`.
- **Dependencies**: `libdobby.a` (static, in `libraries/arm64-v8a/`) and Android `-llog`.
- **Unity version**: BNM headers support Unity 2017.1–2021.2. Match target game.
- **Thread safety**: `LogToFile` uses mutex; JNI attach/detach is per-thread.

## What to Avoid

- **Do NOT commit** generated IL2CPP dumps unless verified for current game version.
- **Do NOT commit** build outputs: `app/src/main/obj/`, `.so` files.
- **Do NOT modify** `app/src/main/libs/` unless redistributing prebuilt libraries.
- **Avoid raw IL2CPP API** (`il2cpp_*`); always use BNM wrappers when possible.

## Troubleshooting

### Build fails: "cannot find -ldobby"
Ensure `app/src/main/jni/libraries/arm64-v8a/libdobby.a` exists.

### "Class not found" at runtime
Method might be in wrong namespace. Some classes use empty namespace `""`. Check IL2CPP dump.

### Hook not firing
- Verify `method.IsValid()` before `BasicHook`
- Ensure `BasicHook` called after IL2CPP loads (inside `start()` callback)
- Original function pointer remains null if method is not virtual or already hooked

### Crash in hook when calling `old_Method`
`old_Method` is only set if `BasicHook` succeeds. Guard:
```cpp
if (old_Method) old_Method();
```

### No logs in Logcat
Tag is `IL2CPP_EXPORTS`. Use: `adb logcat -s IL2CPP_EXPORTS:I`

## Code Style

- C++20 allowed (constexpr, auto, etc.)
- Use `auto` for type clarity when type is obvious
- Prefix globals with `g_` (e.g., `g_logThread`, `g_stringClass`)
- Hook functions: `ReturnType Hooked_OriginalName(...)`
- Original function pointers: `ReturnType (*old_OriginalName)(Params);`
- Logging: `LOGD` (info), `LOGW` (warn), `LOGE` (error)

## Maintenance Tips

- Keep `Main.cpp` organized with section comments
- Use descriptive hook names consistent with original method
- Prefer BNM::CreateMonoString() over raw il2cpp_string_new
- Prefer Class::NewArray<T>() over raw il2cpp_array_new
- Cache reflection lookups in `InitModCache()` - avoid repeated GetMethod calls
- For string comparisons, use `.str() == "..."` or `std::string::compare`

## References

- **BNM Library**: https://github.com/ByNameModding/BNM-Android (official BNM repository)
- Unity IL2CPP internals: `BNM/include/BNM/Il2CppHeaders/`
- Dobby: https://github.com/jmpews/Dobby (inline hooking used by BNM)
- Project INSTRUCTIONS.md for detailed injection guide
