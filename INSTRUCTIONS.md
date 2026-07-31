# 修改指南：注入自定义文件选择器（新版方案）

> 本文档已按**新版方案**更新：
> - 文件选择器使用自研 `CustomFileChooser`（原生 `android.app.AlertDialog`，无 androidx 依赖）
> - 由 C++ 侧在运行时通过 `DexClassLoader` 挂载 APK 内的 `classes2.dex`
> - **无需**修改游戏里的 `UnityPlayerActivity` / `onActivityResult`

---

## 0. 方案概览

这个 mod 由两部分组成，都需要注入游戏 APK：

| 产物 | 来源 | 注入位置 |
|------|------|---------|
| `libOctober.so` | C++/JNI（`app/src/main/jni/`）| 替换游戏 `lib/arm64-v8a/libOctober.so` |
| `classes2.dex`（含文件选择器 Java 类）| `com/unity3d/player/*.java` | 加入游戏 APK 根（`classes2.dex`）|

关键点：**文件选择器 Java 类放在 `classes2.dex`，由 `libOctober.so` 在运行时自己加载**（`FilePicker.cpp` 的 `LoadSecondaryDex()`），所以不需要游戏主动加载多 dex，也不用改 `UnityPlayerActivity`。

---

## 1. 编译 Java 为 DEX（文件选择器部分）

**源文件**（都在 `app/src/main/java/com/unity3d/player/`）：
- `CustomFileChooser.java`
- `FileSelector.java`

这两个类只用了 Android 原生 API（`android.app.AlertDialog` 等），**不依赖 androidx**，因此可以很方便地编成独立 dex。

**注意**：请勿使用 lambda / 菱形泛型 / multi-catch 等 Java 8+ 语法编写这份代码——AIDE 的老式编译器不支持。仓库里的这两个文件已是 AIDE 兼容写法。

### 方式 A：在 PC 上（推荐）

```bash
export ANDROID_HOME=/path/to/Android/Sdk

# 编译两个文件（需要 android.jar 作 bootclasspath）
javac -bootclasspath "$ANDROID_HOME/platforms/android-30/android.jar" \
      -source 1.7 -target 1.7 \
      -d out/classes \
      app/src/main/java/com/unity3d/player/CustomFileChooser.java \
      app/src/main/java/com/unity3d/player/FileSelector.java

# 打包成 jar
jar cf out/filepicker.jar -C out/classes .

# 转成 DEX
"$ANDROID_HOME/build-tools/33.0.0/d8" --output out/classes2.dex out/filepicker.jar
```

得到 `out/classes2.dex`。

### 方式 B：使用 AIDE（在手机上）

1. 新建一个 Android 工程，把两个 `.java` 文件按包路径放入
2. 编译（AIDE 自动处理 DEX）
3. 从构建产物/APK 提取 `classes2.dex`（或 `classesN.dex`，注意是含文件选择器那个）

### 方式 C：使用 Termux（手机上）

```bash
pkg install openjdk-17 android-sdk
# 下载对应 android.jar 到当前目录
javac -bootclasspath ./android.jar -d out/classes \
      CustomFileChooser.java FileSelector.java
jar cf filepicker.jar -C out/classes .
d8 --output classes2.dex filepicker.jar
```

> 不要用裸 `javac FileSelector.java`，必须用 `-bootclasspath` 指向 `android.jar`（API 23+）。

---

## 2. 编译 C++ 库（libOctober.so）

```bash
cd app/src/main/jni
ndk-build clean
ndk-build
```

产物：`app/src/main/obj/local/arm64-v8a/libOctober.so`

**编译环境注意（AIDE 下可能出现早期崩溃）**：若游戏在 `JNI_OnLoad`/IL2CPP 加载阶段崩溃（日志只停在 `Log system started`），请关闭 `Application.mk` 中的 `APP_LTO` / `APP_THIN_ARCHIVE` / `--strip-all`（或直接尝试换一个游戏版本）。仓库里的 `Application.mk` 已默认关闭这些，编译更保守、更稳。

---

## 3. 注入 DEX 到 APK

1. 解包游戏 APK（apktool 或 MT2 等均可）
2. 把第 1 步得到的 dex 放入 APK 根，命名为 `classes2.dex`
3. （可选）如果游戏已有多个 dex，命名按 `classes2.dex`、`classes3.dex`…依次递增，不要覆盖已有编号

> 注：新方案由 `.so` 运行时 `DexClassLoader` 加载 `classes2.dex`，所以不需要在 Manifest 配 `android.secondary-dex`，也不需要合并 dex。

---

## 4. 替换 libOctober.so

把第 2 步编译出的 `libOctober.so` 覆盖到 APK 的 `lib/arm64-v8a/libOctober.so`（`libOctober.so` 在游戏内由 `UnityPlayerActivity.onCreate` 里的 `System.loadLibrary("October")` 加载）。

---

## 5. 重打包 + 签名

```bash
apktool b game_src -o game_mod.apk
apksigner sign --ks your-key.jks game_mod.apk
# 或
jarsigner -verbose -sigalg SHA1withRSA -digestalg SHA1 \
          -keystore my-release-key.keystore game_mod.apk alias_name
```

---

## 6. Android 权限配置

自定义文件选择器直接读取 `/sdcard`，需要外部存储访问能力：

- **Android 11+（API 30+）**：需要 `MANAGE_EXTERNAL_STORAGE`（"所有文件访问"，需用户在系统设置中手动开启）
- **Android 10 及以下**：用 `READ_EXTERNAL_STORAGE` + 运行时请求

在游戏 APK 的 `AndroidManifest.xml` 添加：

```xml
<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
<uses-permission android:name="android.permission.MANAGE_EXTERNAL_STORAGE" />
```

在 `<application>` 上：
```xml
android:requestLegacyExternalStorage="true"
```

（实际游戏 APK 的 Manifest 有些权限可能已存在；若无存储权限，文件选择器会列不出文件或直接空列表。）

---

## 7. 测试

1. 安装修改后的 APK
2. 进入游戏编辑器
3. 点击"打开关卡"按钮 → 应弹出自定义 `AlertDialog` 文件浏览器
4. 浏览 `/sdcard` 目录，选择 `.adofai` / `.zip` 文件后自动加载
5. 查看 mod 日志：`/sdcard/adofai_mod.log`，或 `adb logcat -s October` / `D` 过滤器

**常见排查：**
- 崩溃在 `JNI_OnLoad`/早期阶段（日志只有 `Log system started`）：通常与文件选择器代码无关，先查游戏版本是否兼容、`Application.mk` 的 LTO 是否关闭。
- 文件选择器不弹出：确认 `classes2.dex` 已在 APK 中，且 `libOctober.so` 为包含 `LoadSecondaryDex` 的新版本；查看 `[DexLoad]` / `FileSelector` 前缀日志。
- 列表为空/读不到文件：检查存储权限是否已授权。
