# 修改指南：注入自定义文件选择器

## 1. 编译 Java 为 DEX

**方式 A：在手机上（推荐）**
使用 **AIDE** 或 **Termux + dx/d8**：
```bash
# Termux 示例
javac FilePicker.java
jar cf filepicker.jar com/mod/filepicker/*.class
d8 --output out.dex filepicker.jar
```
得到 `out.dex`，重命名为 `filepicker.dex`

**方式 B：在 PC 上**
```bash
javac FilePicker.java
jar cf filepicker.jar com/mod/filepicker/*.class
# 使用 Android 的 dx 或 d8（在 build-tools 目录）
d8 --output out.dex filepicker.jar
```

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
# 或通过 Gradle
../gradlew assembleDebug
```

编译生成的 `libOctober.so` 位于 `app/src/main/obj/local/arm64-v8a/`，复制到 APK 的 `lib/arm64-v8a/` 或游戏的 `libs/arm64-v8a/`。

## 6. 测试

1. 安装修改后的 APK
2. 进入游戏编辑器
3. 点击"打开关卡"按钮
4. 应该弹出 Android 系统文件选择器
5. 选择 .adofai 或 .zip 文件后自动加载

## 故障排除

- **ClassNotFoundException: com.mod.filepicker.FilePicker**
  - DEX 未正确注入，或包名路径不对
  - 检查 dex 是否在 classes.dex 中：`dexdump game.apk | grep FilePicker`

- **UnsatisfiedLinkError: nativeOnFileSelected**
  - C++ 库未加载或函数签名不对
  - 确保函数名完全匹配：`Java_com_mod_filepicker_FilePicker_nativeOnFileSelected`
  - 确保 `libOctober.so` 已加载（放在 lib/ 下）

- **文件路径无法加载**
  - `getRealPath()` 可能返回的是 `content://` URI 而非真实路径
  - 需要完善 Java 的 `getRealPath` 实现，通过 ContentResolver 查询 `_data` 列
  - 或者让 C++ 接收 uri.toString() 并做进一步解析

- **应用在文件选择器后崩溃**
  - 检查 Logcat 查看具体错误
  - 确保在 C++ Hook 中正确附加/分离 JNI 线程

## 注意事项

- JNI 回调函数必须是 `extern "C"` 且签名完全匹配
- 如果游戏是多线程，注意线程安全（已使用 mutex）
- 如果 `scnEditor.OpenLevel` 方法签名不同（例如有参数），需要调整 Hook 函数签名

---

需要我提供 `getRealPath` 的完整实现（支持 content://）吗？或者有其他问题？
