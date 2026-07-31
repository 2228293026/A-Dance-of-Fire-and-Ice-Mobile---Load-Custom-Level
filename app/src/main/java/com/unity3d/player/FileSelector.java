package com.unity3d.player;

import android.app.Activity;
import android.util.Log;

import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.util.Map;

/**
 * 文件选择器静态门面类。
 *
 * 通过 ActivityThread 反射获取当前前台 Activity，
 * 提供保存/选择文件/选择文件夹三种入口，统一使用 CustomFileChooser 对话框。
 * 选中路径通过 setPath() 写回，调用方用 getFilePath() / isDone 轮询读取。
 */
public class FileSelector {
    public static Activity context;
    static String filePath = "";
    static String folderPath = "";
    static boolean isFolderSelection = false;
    public static boolean isDone = false;

    public static void saveAs(final String name) {
        isDone = false;
        isFolderSelection = false;
        String ext = "";
        int dotIndex = name.lastIndexOf('.');
        if (dotIndex > 0) {
            ext = name.substring(dotIndex + 1);
        }
        final String finalExt = ext;

        final Activity activity = getCurrentActivity();
        if (activity != null) {
            activity.runOnUiThread(new Runnable() {
                @Override public void run() {
                    new CustomFileChooser(activity, true, false, name, finalExt).show();
                }
            });
        }
    }

    public static void selectFile(final String fileType) {
        isDone = false;
        isFolderSelection = false;

        String ext = "*";
        if (fileType != null && !fileType.equals("*/*") && !fileType.equals("*")) {
            if (fileType.endsWith("/*")) {
                ext = fileType.substring(0, fileType.length() - 2);
            } else {
                ext = fileType;
            }
        }
        final String finalExt = ext;

        final Activity activity = getCurrentActivity();
        if (activity != null) {
            activity.runOnUiThread(new Runnable() {
                @Override public void run() {
                    new CustomFileChooser(activity, false, false, null, finalExt).show();
                }
            });
        }
    }

    public static void selectFolder() {
        isDone = false;
        isFolderSelection = true;

        final Activity activity = getCurrentActivity();
        if (activity != null) {
            activity.runOnUiThread(new Runnable() {
                @Override public void run() {
                    new CustomFileChooser(activity, false, true, null, "*").show();
                }
            });
        }
    }

    public static String getFolderPath() {
        return folderPath;
    }

    private static Activity getCurrentActivity() {
        if (context == null) {
            try {
                Class activityThreadClass = Class.forName("android.app.ActivityThread");
                Object activityThread = activityThreadClass.getMethod("currentActivityThread").invoke(null);
                Field activitiesField = activityThreadClass.getDeclaredField("mActivities");
                activitiesField.setAccessible(true);
                Map activities = (Map) activitiesField.get(activityThread);
                for (Object activityRecord : activities.values()) {
                    Class activityRecordClass = activityRecord.getClass();
                    Field pausedField = activityRecordClass.getDeclaredField("paused");
                    pausedField.setAccessible(true);
                    if (!pausedField.getBoolean(activityRecord)) {
                        Field activityField = activityRecordClass.getDeclaredField("activity");
                        activityField.setAccessible(true);
                        Activity activity = (Activity) activityField.get(activityRecord);
                        context = activity;
                        return activity;
                    }
                }
            } catch (ClassNotFoundException e) {
                Log.e("Unity", "Could not get current activity", e);
            } catch (NoSuchFieldException e) {
                Log.e("Unity", "Could not get current activity", e);
            } catch (IllegalAccessException e) {
                Log.e("Unity", "Could not get current activity", e);
            } catch (NoSuchMethodException e) {
                Log.e("Unity", "Could not get current activity", e);
            } catch (InvocationTargetException e) {
                Log.e("Unity", "Could not get current activity", e);
            }
        }
        return context;
    }

    public static void setPath(String path) {
        if (path == null) path = "";

        filePath = path;
        if (isFolderSelection) {
            folderPath = path;
            isFolderSelection = false;
        } else {
            filePath = path;
        }
        isDone = true;
    }

    public static String getFilePath() {
        return filePath;
    }
}
