#ifndef FILEPICKER_H
#define FILEPICKER_H

#include <jni.h>
#include <string>
#include <mutex>
#include <condition_variable>
#include "universe.h"

using namespace BNM;
using namespace BNM::Structures::Mono;
using namespace BNM::Structures::Unity;

// 初始化 Java 文件选择器桥接（com.unity3d.player.FileSelector）
void InitJavaFilePicker(JNIEnv* env);

// 安装文件选择器 hook
void InstallFilePickerHook();

#endif // FILEPICKER_H
