package com.adofai.mod;

import android.app.Activity;
import android.os.Bundle;
import android.widget.LinearLayout;
import android.widget.TextView;

/**
 * 空壳主界面。
 *
 * 本工程本质是一个 NDK mod（libOctober.so），依赖游戏内 BNM 注入方式运行。
 * 该壳 Activity 仅用于让 AIDE 将其识别为一个可编译的 Android 工程。
 * 编译产物为 app/src/main/obj/local/arm64-v8a/libOctober.so 。
 *
 * 注意：不要在这里 System.loadLibrary("October") —— 它会触发 JNI_OnLoad
 * 去 hook ADOFAI 的 IL2CPP 方法，脱离游戏环境会崩溃。
 */
public class MainActivity extends Activity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        LinearLayout root = new LinearLayout(this);
        root.setOrientation(LinearLayout.VERTICAL);
        root.setPadding(40, 80, 40, 40);

        TextView title = new TextView(this);
        title.setText("ADOFAI Load Custom Level Mod");
        title.setTextSize(20);

        TextView desc = new TextView(this);
        desc.setText(
            "\n这是一个 NDK mod（libOctober.so）。\n\n" +
            "它通过 BNM 对游戏 IL2CPP 方法做 hook，" +
            "需注入到游戏 APK 后才能发挥作用。\n\n" +
            "编译完成后，取出产物：\n" +
            "app/src/main/obj/local/arm64-v8a/libOctober.so\n\n" +
            "并按 INSTRUCTIONS.md 的流程注入游戏 APK。");
        desc.setTextSize(14);

        root.addView(title);
        root.addView(desc);

        setContentView(root);
    }
}
