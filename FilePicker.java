package com.mod.filepicker;

import android.app.Activity;
import android.content.ContentResolver;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.provider.DocumentsContract;
import android.provider.MediaStore;
import java.io.FileWriter;
import java.io.IOException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;

public class FilePicker {
    private static long nativeCallbackPtr = 0;
    //private static final String LOG_PATH = "/sdcard/adofai_mod.log";

    private static String msg;

    // 写日志到文件（同步方法，避免竞争）
    private static synchronized void logToFile(String message) {
        /*
        try {
            FileWriter writer = new FileWriter(LOG_PATH, true); // append mode
            String timestamp = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss.SSS", Locale.getDefault()).format(new Date());
            writer.write(timestamp + " " + message + "\n");
            writer.flush();
            writer.close();
        } catch (IOException e) {
            android.util.Log.e("FilePicker", "Failed to write log to file", e);
        }
        */
    }

    // 初始化：只保存 C++ 回调指针，不需要传 Activity（每次都从 UnityPlayer 获取）
    public static void initialize(long callbackPtr) {
        nativeCallbackPtr = callbackPtr;
        logToFile("FilePicker.initialize(callbackPtr=" + callbackPtr + ")");
    }

    // 获取 UnityPlayer.currentActivity
    private static Activity getUnityActivity() {
        try {
            Class<?> unityPlayerClass = Class.forName("com.unity3d.player.UnityPlayer");
            logToFile("FilePicker: UnityPlayer class loaded");
            java.lang.reflect.Field currentActivityField = unityPlayerClass.getDeclaredField("currentActivity");
            currentActivityField.setAccessible(true);
            Object activity = currentActivityField.get(null);
            logToFile("FilePicker: currentActivity反射获取: " + activity);
            return (Activity) activity;
        } catch (Exception e) {
            android.util.Log.e("FilePicker", "Failed to get UnityPlayer.currentActivity via reflection", e);
            logToFile("FilePicker: 获取UnityPlayer.currentActivity失败: " + e.getMessage());
            return null;
        }
    }

    // 检查是否有读取外部存储的权限（Android 10及以下）
    private static boolean hasReadExternalStoragePermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            Activity activity = getUnityActivity();
            if (activity != null) {
                int result = activity.checkSelfPermission(android.Manifest.permission.READ_EXTERNAL_STORAGE);
                boolean hasPermission = result == PackageManager.PERMISSION_GRANTED;
                logToFile("FilePicker: READ_EXTERNAL_STORAGE permission check: " + hasPermission);
                return hasPermission;
            }
        }
        // Android M 以下默认有权限
        return true;
    }

    // 检查是否有所有文件访问权限（Android 11+）
    private static boolean hasAllFilesAccessPermission() {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            Activity activity = getUnityActivity();
            if (activity != null) {
                boolean hasPermission = android.os.Environment.isExternalStorageManager();
                logToFile("FilePicker: MANAGE_EXTERNAL_STORAGE permission check: " + hasPermission);
                return hasPermission;
            }
        }
        return true; // 非Android R或以上，不检查此权限
    }

    // 检查对URI的读取权限
    private static boolean hasUriReadPermission(Activity activity, Uri uri) {
        try {
            int takeFlags = Intent.FLAG_GRANT_READ_URI_PERMISSION;
            activity.getContentResolver().takePersistableUriPermission(uri, takeFlags);
            logToFile("FilePicker: Successfully took persistable URI permission for " + uri);
            return true;
        } catch (Exception e) {
            logToFile("FilePicker: Failed to take persistable URI permission: " + e.getMessage());
            return false;
        }
    }

    // 显示文件选择器（支持 .adofai, .zip 等）
    public static void show() {
        Activity activity = getUnityActivity();
        if (activity == null) {
            String msg = "show: unityActivity is null!";
            android.util.Log.e("FilePicker", msg);
            logToFile("FilePicker: " + msg);
            return;
        }
        Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
        intent.addCategory(Intent.CATEGORY_OPENABLE);
        intent.setType("*/*");
        String[] mimeTypes = {
            "application/octet-stream",
            "application/json",
            "text/plain",
            "application/zip",
            "application/x-zip-compressed",
            "application/x-adofai"
        };
        intent.putExtra(Intent.EXTRA_MIME_TYPES, mimeTypes);
        // 使用 requestCode 54321
        activity.startActivityForResult(intent, 54321);
        String msg = "startActivityForResult called";
        android.util.Log.d("FilePicker", msg);
        logToFile("FilePicker: " + msg);
    }

    // 处理结果（需在 UnityPlayerActivity.onActivityResult 中调用）
    public static void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (requestCode != 54321) {
            logToFile("FilePicker: onActivityResult requestCode mismatch: " + requestCode);
            return;
        }

        String path = null;
        if (resultCode == Activity.RESULT_OK && data != null) {
            Uri uri = data.getData();
            if (uri != null) {
                Activity activity = getUnityActivity();
                if (activity != null) {
                    // 持久化URI权限（Android 4.4+）
                    hasUriReadPermission(activity, uri);
                }
                path = getRealPath(uri);
            }
        } else {
            String msg = "onActivityResult: cancelled or no data, resultCode=" + resultCode;
            android.util.Log.d("FilePicker", msg);
            logToFile("FilePicker: " + msg);
        }

        // 回调到 C++（nativeOnFileSelected 已在 Main.cpp 实现）
        String msg = "Calling nativeOnFileSelected with path: " + path;
        android.util.Log.d("FilePicker", msg);
        logToFile("FilePicker: " + msg);
        nativeOnFileSelected(nativeCallbackPtr, path);
    }

    private static String getRealPath(Uri uri) {
        String logMsg = "getRealPath: uri=" + uri.toString() + ", scheme=" + uri.getScheme();
        android.util.Log.d("FilePicker", logMsg);
        logToFile("FilePicker: " + logMsg);

        // 检查权限（Android 11+ 需要检查所有文件访问权限）
        Activity activity = getUnityActivity();
        if (activity != null) {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
                if (!hasAllFilesAccessPermission()) {
                    logMsg = "No MANAGE_EXTERNAL_STORAGE permission on Android 11+";
                    android.util.Log.e("FilePicker", logMsg);
                    logToFile("FilePicker: " + logMsg);
                    // Android 11+ 即使没有所有文件访问权限，仍可以访问通过文件选择器获得的URI
                    // 但直接文件路径可能无法访问
                }
            } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
                if (!hasReadExternalStoragePermission()) {
                    logMsg = "No READ_EXTERNAL_STORAGE permission on Android 6-10";
                    android.util.Log.e("FilePicker", logMsg);
                    logToFile("FilePicker: " + logMsg);
                    // 没有读取权限，返回原始URI字符串，让C++侧通过URI访问
                    return uri.toString();
                }
            }
        }

        // 如果是 file:// URI，直接返回路径
        if ("file".equals(uri.getScheme())) {
            String path = uri.getPath();
            logMsg = "file scheme, path=" + path;
            android.util.Log.d("FilePicker", logMsg);
            logToFile("FilePicker: " + logMsg);
            return path;
        }

        // 处理 ExternalStorageProvider (content://com.android.externalstorage.documents)
        String authority = uri.getAuthority();
        if ("com.android.externalstorage.documents".equals(authority)) {
            logMsg = "Detected ExternalStorageProvider";
            android.util.Log.d("FilePicker", logMsg);
            logToFile("FilePicker: " + logMsg);

            try {
                String docId = DocumentsContract.getDocumentId(uri);
                logMsg = "DocumentId: " + docId;
                android.util.Log.d("FilePicker", logMsg);
                logToFile("FilePicker: " + logMsg);

                // 格式示例: primary:levels/2.8/am.adofai
                if (docId != null && docId.contains(":")) {
                    String[] parts = docId.split(":", 2);
                    if (parts.length == 2) {
                        String volume = parts[0];
                        String relPath = parts[1];
                        if ("primary".equals(volume)) {
                            String fullPath = "/storage/emulated/0/" + relPath;
                            logMsg = "Resolved primary path: " + fullPath;
                            android.util.Log.d("FilePicker", logMsg);
                            logToFile("FilePicker: " + logMsg);
                            return fullPath;
                        }
                    }
                }
            } catch (Exception e) {
                logMsg = "Error parsing ExternalStorageProvider docId: " + e.getMessage();
                android.util.Log.e("FilePicker", logMsg, e);
                logToFile("FilePicker: " + logMsg);
            }
        }

        // 其他 content:// URI：尝试通过 ContentResolver 查询 _data 列
        if (activity == null) {
            activity = getUnityActivity();
            if (activity == null) {
                String msg = "getRealPath: unityActivity is null!";
                android.util.Log.e("FilePicker", msg);
                logToFile("FilePicker: " + msg);
                return uri.toString();
            }
        }

        ContentResolver resolver = activity.getContentResolver();
        String[] projection = { "_data" };
        try (Cursor cursor = resolver.query(uri, projection, null, null, null)) {
            if (cursor != null) {
                logMsg = "cursor count=" + cursor.getCount();
                android.util.Log.d("FilePicker", logMsg);
                logToFile("FilePicker: " + logMsg);
                if (cursor.moveToFirst()) {
                    int columnIndex = cursor.getColumnIndex("_data");
                    if (columnIndex != -1) {
                        String path = cursor.getString(columnIndex);
                        logMsg = "query _data returned: " + path;
                        android.util.Log.d("FilePicker", logMsg);
                        logToFile("FilePicker: " + logMsg);
                        return path;
                    } else {
                        msg = "_data column not found";
                        android.util.Log.w("FilePicker", msg);
                        logToFile("FilePicker: " + msg);
                    }
                }
                cursor.close();
            } else {
                msg = "cursor is null";
                android.util.Log.w("FilePicker", msg);
                logToFile("FilePicker: " + msg);
            }
        }

        // 回退：尝试用 uri.getPath()
        String path = uri.getPath();
        if (path != null && !path.isEmpty()) {
            logMsg = "fallback to uri.getPath(): " + path;
            android.util.Log.d("FilePicker", logMsg);
            logToFile("FilePicker: " + logMsg);

            // 再次尝试解析 path 中的 primary:
            if (path.contains("primary:")) {
                int idx = path.indexOf("primary:");
                String after = path.substring(idx + "primary:".length());
                String full = "/storage/emulated/0/" + after;
                logMsg = "Parsed from getPath(): " + full;
                android.util.Log.d("FilePicker", logMsg);
                logToFile("FilePicker: " + logMsg);
                return full;
            }
            return path;
        }

        // 最后回退：返回 uri.toString()
        String fallback = uri.toString();
        logMsg = "fallback to uri.toString(): " + fallback;
        android.util.Log.d("FilePicker", logMsg);
        logToFile("FilePicker: " + logMsg);
        return fallback;
    }

    // 原生回调函数声明（由 C++ 提供实现）
    private static native void nativeOnFileSelected(long callbackPtr, String path);
}


