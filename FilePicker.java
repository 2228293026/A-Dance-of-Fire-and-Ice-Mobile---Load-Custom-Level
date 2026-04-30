package com.mod.filepicker;

import android.app.Activity;
import android.content.ContentResolver;
import android.content.Intent;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.provider.DocumentsContract;
import android.util.Log;

import java.lang.ref.WeakReference;
import java.lang.reflect.Field;

public class FilePicker {
    private static long nativeCallbackPtr = 0;
    private static final String TAG = "FilePicker";
    private static WeakReference<Activity> activityRef;
    // 已无使用，但保留原签名 nativeOnFileSelected 仍需参数
    // private static final String LOG_PATH = "/sdcard/adofai_mod.log";  // 不再使用 Java 日志

    public static void initialize(long callbackPtr) {
        nativeCallbackPtr = callbackPtr;
        Log.d(TAG, "initialize: callbackPtr=" + callbackPtr);
        // 初始化时获取一次 Activity 并缓存（弱引用）
        refreshUnityActivity();
    }

    /**
     * 获取并缓存 UnityPlayer.currentActivity（弱引用）
     */
    private static void refreshUnityActivity() {
        try {
            Class<?> unityPlayerClass = Class.forName("com.unity3d.player.UnityPlayer");
            Field field = unityPlayerClass.getDeclaredField("currentActivity");
            field.setAccessible(true);
            Activity act = (Activity) field.get(null);
            activityRef = new WeakReference<>(act);
            Log.d(TAG, "refreshUnityActivity: " + act);
        } catch (Exception e) {
            Log.e(TAG, "Failed to get UnityPlayer.currentActivity", e);
            activityRef = new WeakReference<>(null);
        }
    }

    /**
     * 获取当前 Activity（从缓存弱引用获取，若为空则刷新一次）
     */
    private static Activity getUnityActivity() {
        Activity act = (activityRef != null) ? activityRef.get() : null;
        if (act == null) {
            refreshUnityActivity();
            act = (activityRef != null) ? activityRef.get() : null;
        }
        return act;
    }

    /**
     * 显示文件选择器（ACTION_OPEN_DOCUMENT）
     */
    public static void show() {
        Activity activity = getUnityActivity();
        if (activity == null) {
            Log.e(TAG, "show: unityActivity is null");
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
        activity.startActivityForResult(intent, 54321);
        Log.d(TAG, "startActivityForResult called");
    }

    /**
     * 处理 onActivityResult（需在 UnityPlayerActivity 中调用）
     */
    public static void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (requestCode != 54321) return;

        String path = null;
        if (resultCode == Activity.RESULT_OK && data != null) {
            Uri uri = data.getData();
            if (uri != null) {
                Activity activity = getUnityActivity();
                if (activity != null) {
                    try {
                        int takeFlags = Intent.FLAG_GRANT_READ_URI_PERMISSION;
                        activity.getContentResolver().takePersistableUriPermission(uri, takeFlags);
                    } catch (Exception e) {
                        Log.w(TAG, "Failed to take persistable URI permission: " + e.getMessage());
                    }
                }
                path = getRealPath(uri);
            }
        }
        Log.d(TAG, "onActivityResult: path=" + path);
        nativeOnFileSelected(nativeCallbackPtr, path);
    }

    /**
     * 从 content:// URI 解析真实文件路径（优化版）
     */
    private static String getRealPath(Uri uri) {
        Log.d(TAG, "getRealPath: uri=" + uri);
        if (uri == null) return null;

        // file:// 直接取路径
        if ("file".equals(uri.getScheme())) {
            return uri.getPath();
        }

        // 尝试 ExternalStorageProvider（primary:）
        String authority = uri.getAuthority();
        if ("com.android.externalstorage.documents".equals(authority)) {
            try {
                String docId = DocumentsContract.getDocumentId(uri);
                if (docId != null && docId.contains(":")) {
                    String[] parts = docId.split(":", 2);
                    if (parts.length == 2 && "primary".equals(parts[0])) {
                        return "/storage/emulated/0/" + parts[1];
                    }
                }
            } catch (Exception e) {
                Log.w(TAG, "Error parsing ExternalStorageProvider", e);
            }
        }

        Activity activity = getUnityActivity();
        if (activity == null) return uri.toString();

        // 通过 ContentResolver 查询 _data 列
        ContentResolver resolver = activity.getContentResolver();
        try (Cursor cursor = resolver.query(uri, new String[]{"_data"}, null, null, null)) {
            if (cursor != null && cursor.moveToFirst()) {
                int columnIndex = cursor.getColumnIndex("_data");
                if (columnIndex != -1) {
                    String path = cursor.getString(columnIndex);
                    if (path != null) return path;
                }
            }
        }

        // 回退：使用 uri.getPath() 并解析可能的 primary:
        String path = uri.getPath();
        if (path != null && path.contains("primary:")) {
            int idx = path.indexOf("primary:");
            return "/storage/emulated/0/" + path.substring(idx + "primary:".length());
        }

        return path != null ? path : uri.toString();
    }

    // 原生回调（由 C++ 实现）
    private static native void nativeOnFileSelected(long callbackPtr, String path);
}