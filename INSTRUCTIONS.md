# 修改指南：注入自定义文件选择器

## 1. 编译 Java 为 DEX

**前提条件**：
- 安装 Android SDK（或仅需 Android 平台 jar 和 build-tools）
- 设置 `ANDROID_HOME` 环境变量指向 SDK 路径

**方式 A：在 PC 上（推荐）**
```bash
# 设置变量（根据你的 SDK 路径调整）
export ANDROID_HOME=/path/to/Android/Sdk
# 或 Windows: set ANDROID_HOME=C:\Users\YourName\AppData\Local\Android\Sdk

# 1. 编译 Java（需要 android.jar 作为 bootclasspath）
javac -bootclasspath "$ANDROID_HOME/platforms/android-36.1/android.jar" \
      -d out/classes FilePicker.java

# 2. 打包成 jar
jar cf out/filepicker.jar -C out/classes .

# 3. 转换为 DEX（使用 build-tools 中的 d8）
"$ANDROID_HOME/build-tools/33.0.0/d8" --output out/classes.dex out/filepicker.jar
# 或使用旧版 dx:
# "$ANDROID_HOME/build-tools/33.0.0/dx" --dex --output=out/classes.dex out/filepicker.jar

# 得到的 classes.dex 即为所需的 DEX 文件
```

**方式 B：使用 AIDE（在手机上）**
1. 在 AIDE 中创建新项目，将 `FilePicker.java` 加入
2. 编译运行（AIDE 自动处理 DEX）
3. 从应用缓存或 APK 提取 `classes.dex`

**方式 C：使用 Termux（手机上）**
```bash
pkg install openjdk-17 android-sdk
# 下载 android.jar 到当前目录
javac -bootclasspath ./android.jar -d out/classes FilePicker.java
jar cf filepicker.jar -C out/classes .
d8 --output classes.dex filepicker.jar
```

**注意**：不要使用裸 `javac FilePicker.java`，必须指定 `-bootclasspath` 指向 Android API 的 `android.jar`（API level 23+），否则会报错缺少 `android.*` 包。

## 2. 注入 DEX 到 APK

1. 解压游戏 APK：
```bash
apktool d game.apk -o game_src
```

2. 将 `out.dex` 重命名为 `classes2.dex`，复制到 `game_smali/`（或直接覆盖 `classes.dex` 如果不想多dex）

   简单起见：直接替换 `game_src/classes.dex`（注意备份）

3. 如果使用多dex（classes2.dex），需要修改 `game_src/AndroidManifest.xml` 添加：
```xml
<application ...>
    <meta-data android:name="android.secondary-dex"
               android:value="classes2.dex" />
</application>
```
但游戏可能不支持。建议**直接合并 dex**到主 dex：
```bash
# 使用 dexmerge 或直接合并 classes.dex + out.dex
# 更简单：将 FilePicker 的 smali 代码复制到 game_src/ 对应目录
# AIDE 编译得到的 dex 可以直接替换
```

## 3. 修改 UnityPlayerActivity（关键步骤）

必须让 Unity 的 `onActivityResult` 转发给 `FilePicker.onActivityResult`。

**找到 UnityPlayerActivity.smali**（路径类似 `game_src/smali/com/unity3d/player/UnityPlayerActivity.smali`）

在 `onActivityResult` 方法中添加一行：

```smali
.method protected onActivityResult(IILandroid/content/Intent;)V
    .locals 0
    .param p1, "requestCode"    # I
    .param p2, "resultCode"    # I
    .param p3, "data"    # Landroid/content/Intent;

    .line
    invoke-super {p0, p1, p2, p3}, Landroid/app/Activity;->onActivityResult(IILandroid/content/Intent;)V

    # 新增：转发给 FilePicker
    invoke-static {p1, p2, p3}, Lcom/mod/filepicker/FilePicker;->onActivityResult(IILandroid/content/Intent;)V

    return-void
.end method
```

如果找不到此方法，查找类似 `protected void onActivityResult` 的 smali 方法。

## 4. 重新打包 APK

```bash
apktool b game_src -o game_mod.apk
# 签名
apksigner sign --ks your-key.jks game_mod.apk
# 或使用 jarsigner
jarsigner -verbose -sigalg SHA1withRSA -digestalg SHA1 -keystore my-release-key.keystore game_mod.apk alias_name
```

## 5. 编译 C++ 库

将修改后的 `Main.cpp` 复制到你的 NDK 项目：
```bash
cd app/src/main/jni
ndk-build clean
ndk-build
```

编译生成的 `libOctober.so` 位于 `app/src/main/obj/local/arm64-v8a/`，复制到 APK 的 `lib/arm64-v8a/` 或游戏的 `libs/arm64-v8a/`。

## 6. Android 权限配置

文件选择器需要访问外部存储的权限。根据 Android 版本不同，需要不同的权限配置：

### Android 10 (API 29) 及以下
在 `AndroidManifest.xml` 中添加：
```xml
<uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
<uses-permission android:name="android.permission.WRITE_EXTERNAL_STORAGE" />
```

### Android 11 (API 30) 及以上
推荐使用 **所有文件访问权限**（需用户手动在设置中开启）：
```xml
<uses-permission android:name="android.permission.MANAGE_EXTERNAL_STORAGE" />
```
并且在 `<application>` 标签中添加：
```xml
android:requestLegacyExternalStorage="false"
```

**注意**：`MANAGE_EXTERNAL_STORAGE` 属于特殊权限，用户需要在 "设置 > 应用 > 权限 > 所有文件访问" 中手动授权。Google Play 对此权限有严格审核。

### 兼容方案（推荐）
使用 **Storage Access Framework (SAF)**，无需特殊权限即可通过 `Intent.ACTION_OPEN_DOCUMENT` 选择文件。当前代码已实现 SAF，用户选择文件时会授予一次性读取权限。

如果你只访问公共目录（如 `Downloads/`, `Documents/`），可以申请 `READ_EXTERNAL_STORAGE` 并在 Android 10+ 使用 **分区存储 (Scoped Storage)**：
```xml
<application
    android:requestLegacyExternalStorage="true"  <!-- Android 10 兼容 -->
    ...>
</application>
```

### 修改 `AndroidManifest.xml` 示例
```xml
<manifest xmlns:android="http://schemas.android.com/apk/res/android"
    package="com.example.application">

    <!-- 权限 -->
    <uses-permission android:name="android.permission.READ_EXTERNAL_STORAGE" />
    <!-- Android 11+ 完整访问（可选） -->
    <uses-permission android:name="android.permission.MANAGE_EXTERNAL_STORAGE" />

    <application
        android:requestLegacyExternalStorage="true"
        ...>
        ...
    </application>
</manifest>
```

### 运行时权限请求（如果需要）
如果使用 `READ_EXTERNAL_STORAGE`，需要在运行时请求权限（Android 6.0+）：
```java
if (ContextCompat.checkSelfPermission(this, Manifest.permission.READ_EXTERNAL_STORAGE)
    != PackageManager.PERMISSION_GRANTED) {
    ActivityCompat.requestPermissions(this,
        new String[]{Manifest.permission.READ_EXTERNAL_STORAGE}, 1);
}
```
但 SAF (`ACTION_OPEN_DOCUMENT`) 不需要运行时权限。

## 7. 测试

1. 安装修改后的 APK
2. 进入游戏编辑器
3. 点击"打开关卡"按钮
4. 应该弹出 Android 系统文件选择器
5. 选择 .adofai 或 .zip 文件后自动加载
6. 检查 Logcat: `adb logcat -s IL2CPP_EXPORTS` 确认路径正确传递
