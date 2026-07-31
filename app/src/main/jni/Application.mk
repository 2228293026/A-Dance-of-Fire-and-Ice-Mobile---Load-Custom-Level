APP_PLATFORM=android-23
APP_ABI = arm64-v8a
APP_STL=c++_static
NDK_TOOLCHAIN_VERSION = clang
# 关闭 strip，避免早期加载问题（AIDE 环境）
# APP_STRIP_MODE = --strip-all
APP_OPTIM = release
# APP_THIN_ARCHIVE = true
APP_PIE = true
# APP_LTO 在 AIDE/某些 NDK 上会导致早期崩溃，先关闭
# APP_LTO = true
APP_CPPFLAGS += -D_GNU_SOURCE
