package com.unity3d.player;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;
import android.os.Environment;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

/**
 * 自定义文件选择器对话框（原生 android.app.AlertDialog，无 androidx 依赖）。
 *
 * 兼容 AIDE 老式 Java 编译（不使用 lambda / 菱形泛型）。
 * 支持三种模式：选择文件 / 保存文件 / 选择文件夹。
 * 通过 FileSelector 门面类的静态方法调用。
 */
public class CustomFileChooser {
    private Activity activity;
    private boolean isSaveMode;
    private boolean isFolderMode;
    private String defaultName;
    private String extensionFilter;

    private File currentDir;
    private AlertDialog dialog;
    private TextView pathTextView;
    private EditText searchEditText;
    private EditText filenameEditText;
    private ArrayAdapter<String> adapter;

    private List<File> currentFiles = new ArrayList<File>();
    private List<File> allDirs = new ArrayList<File>();
    private List<File> allFiles = new ArrayList<File>();

    public CustomFileChooser(Activity activity, boolean isSaveMode, boolean isFolderMode,
                             String defaultName, String extensionFilter) {
        this.activity = activity;
        this.isSaveMode = isSaveMode;
        this.isFolderMode = isFolderMode;
        this.defaultName = defaultName;
        this.extensionFilter = extensionFilter;
    }

    public void show() {
        currentDir = Environment.getExternalStorageDirectory();

        AlertDialog.Builder builder = new AlertDialog.Builder(activity);

        LinearLayout layout = new LinearLayout(activity);
        layout.setOrientation(LinearLayout.VERTICAL);

        String titleText = isSaveMode ? "保存文件" : (isFolderMode ? "选择文件夹" : "选择文件");
        String titleIcon = isSaveMode ? "💾" : (isFolderMode ? "📁" : "📂");
        TextView titleView = new TextView(activity);
        titleView.setText(titleIcon + " " + titleText);
        titleView.setTextSize(20);
        titleView.setPadding(40, 30, 40, 10);
        titleView.setTypeface(null, android.graphics.Typeface.BOLD);
        layout.addView(titleView);

        // ---- 顶部：返回上级 + 路径 + 新建文件夹 ----
        LinearLayout pathLayout = new LinearLayout(activity);
        pathLayout.setOrientation(LinearLayout.HORIZONTAL);
        pathLayout.setPadding(40, 20, 40, 10);

        Button backBtn = new Button(activity);
        backBtn.setText("↑");
        backBtn.setPadding(20, 0, 20, 0);
        backBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                File parent = currentDir.getParentFile();
                if (parent != null && parent.canRead()) {
                    currentDir = parent;
                    searchEditText.setText("");
                    listFiles();
                }
            }
        });
        pathLayout.addView(backBtn);

        pathTextView = new TextView(activity);
        pathTextView.setLayoutParams(new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        pathLayout.addView(pathTextView);

        Button newFolderBtn = new Button(activity);
        newFolderBtn.setText("+📁");
        newFolderBtn.setPadding(20, 0, 20, 0);
        newFolderBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                showNewFolderDialog();
            }
        });
        pathLayout.addView(newFolderBtn);

        layout.addView(pathLayout);

        // ---- 搜索框 + 清除按钮 ----
        LinearLayout searchLayout = new LinearLayout(activity);
        searchLayout.setOrientation(LinearLayout.HORIZONTAL);
        searchLayout.setPadding(40, 10, 40, 10);

        searchEditText = new EditText(activity);
        searchEditText.setHint("搜索当前目录...");
        searchEditText.setSingleLine(true);
        searchEditText.setLayoutParams(new LinearLayout.LayoutParams(
                0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
        searchLayout.addView(searchEditText);

        Button clearBtn = new Button(activity);
        clearBtn.setText("X");
        clearBtn.setPadding(20, 0, 20, 0);
        clearBtn.setOnClickListener(new View.OnClickListener() {
            @Override public void onClick(View v) {
                searchEditText.setText("");
            }
        });
        searchLayout.addView(clearBtn);

        layout.addView(searchLayout);

        // ---- 文件列表 ----
        ListView listView = new ListView(activity);
        LinearLayout.LayoutParams lvParams = new LinearLayout.LayoutParams(
                ViewGroup.LayoutParams.MATCH_PARENT, 0, 1.0f);
        layout.addView(listView, lvParams);

        // ---- 保存模式：文件名输入 + 保存 ----
        if (isSaveMode) {
            LinearLayout saveLayout = new LinearLayout(activity);
            saveLayout.setOrientation(LinearLayout.HORIZONTAL);
            saveLayout.setPadding(20, 10, 20, 10);

            filenameEditText = new EditText(activity);
            filenameEditText.setHint("请输入文件名");
            filenameEditText.setText(defaultName);
            filenameEditText.setLayoutParams(new LinearLayout.LayoutParams(
                    0, ViewGroup.LayoutParams.WRAP_CONTENT, 1.0f));
            saveLayout.addView(filenameEditText);

            Button saveButton = new Button(activity);
            saveButton.setText("保存");
            saveButton.setOnClickListener(new View.OnClickListener() {
                @Override public void onClick(View v) {
                    onSaveClicked();
                }
            });
            saveLayout.addView(saveButton);

            layout.addView(saveLayout);
        } else if (isFolderMode) {
            Button selectFolderBtn = new Button(activity);
            selectFolderBtn.setText("选择此目录");
            LinearLayout.LayoutParams btnParams = new LinearLayout.LayoutParams(
                    ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
            btnParams.setMargins(20, 10, 20, 10);
            selectFolderBtn.setLayoutParams(btnParams);
            selectFolderBtn.setOnClickListener(new View.OnClickListener() {
                @Override public void onClick(View v) {
                    FileSelector.setPath(currentDir.getAbsolutePath());
                    dialog.dismiss();
                }
            });
            layout.addView(selectFolderBtn);
        }

        builder.setView(layout);
        builder.setNegativeButton("取消", new DialogInterface.OnClickListener() {
            @Override public void onClick(DialogInterface d, int which) {
                FileSelector.setPath(null);
                d.dismiss();
            }
        });

        dialog = builder.create();
        dialog.show();

        adapter = new ArrayAdapter<String>(activity, android.R.layout.simple_list_item_1,
                new ArrayList<String>());
        listView.setAdapter(adapter);
        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                File selectedFile = currentFiles.get(position);
                if (selectedFile.isDirectory()) {
                    currentDir = selectedFile;
                    searchEditText.setText("");
                    listFiles();
                } else {
                    if (isSaveMode) {
                        filenameEditText.setText(selectedFile.getName());
                    } else if (!isFolderMode) {
                        FileSelector.setPath(selectedFile.getAbsolutePath());
                        dialog.dismiss();
                    } else {
                        Toast.makeText(activity, "请选择文件夹", Toast.LENGTH_SHORT).show();
                    }
                }
            }
        });

        searchEditText.addTextChangedListener(new TextWatcher() {
            @Override
            public void beforeTextChanged(CharSequence s, int start, int count, int after) {}
            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) {}
            @Override
            public void afterTextChanged(Editable s) {
                applySearchFilter(s.toString());
            }
        });

        listFiles();
    }

    /** 新建文件夹对话框。 */
    private void showNewFolderDialog() {
        final EditText input = new EditText(activity);
        input.setHint("文件夹名称");
        input.setSingleLine(true);

        final CustomFileChooser self = this;
        new AlertDialog.Builder(activity)
            .setTitle("新建文件夹")
            .setView(input)
            .setPositiveButton("创建", new DialogInterface.OnClickListener() {
                @Override public void onClick(DialogInterface d, int which) {
                    String name = input.getText().toString().trim();
                    if (name.isEmpty()) {
                        Toast.makeText(activity, "名称不能为空", Toast.LENGTH_SHORT).show();
                        return;
                    }
                    File newDir = new File(currentDir, name);
                    if (newDir.exists()) {
                        Toast.makeText(activity, "已存在同名文件夹", Toast.LENGTH_SHORT).show();
                        return;
                    }
                    if (newDir.mkdirs()) {
                        searchEditText.setText("");
                        listFiles();
                    } else {
                        Toast.makeText(activity, "创建失败", Toast.LENGTH_SHORT).show();
                    }
                }
            })
            .setNegativeButton("取消", null)
            .show();
    }

    private void listFiles() {
        pathTextView.setText("当前路径: " + currentDir.getAbsolutePath());
        allDirs = new ArrayList<File>();
        allFiles = new ArrayList<File>();

        File[] files = currentDir.listFiles();
        if (files != null) {
            for (File file : files) {
                if (file.isHidden()) continue;

                if (file.isDirectory()) {
                    allDirs.add(file);
                } else {
                    boolean shouldShow = true;
                    if (extensionFilter != null && !extensionFilter.isEmpty() && !extensionFilter.equals("*")) {
                        shouldShow = false;
                        String[] exts = extensionFilter.toLowerCase().split(",");
                        for (String ext : exts) {
                            if (file.getName().toLowerCase().endsWith("." + ext.trim())) {
                                shouldShow = true;
                                break;
                            }
                        }
                    }
                    if (shouldShow) {
                        allFiles.add(file);
                    }
                }
            }
        }

        Collections.sort(allDirs, new Comparator<File>() {
            @Override public int compare(File f1, File f2) {
                return f1.getName().compareToIgnoreCase(f2.getName());
            }
        });
        Collections.sort(allFiles, new Comparator<File>() {
            @Override public int compare(File f1, File f2) {
                return f1.getName().compareToIgnoreCase(f2.getName());
            }
        });

        applySearchFilter(searchEditText.getText().toString());
    }

    private void applySearchFilter(String query) {
        currentFiles = new ArrayList<File>();
        List<String> fileNames = new ArrayList<String>();

        File parent = currentDir.getParentFile();
        if (parent != null && parent.canRead()) {
            currentFiles.add(parent);
            fileNames.add("📂 ..");
        }

        String lowerQuery = query.toLowerCase().trim();

        for (File f : allDirs) {
            if (lowerQuery.isEmpty() || f.getName().toLowerCase().contains(lowerQuery)) {
                currentFiles.add(f);
                fileNames.add("📁 " + f.getName());
            }
        }

        for (File f : allFiles) {
            if (lowerQuery.isEmpty() || f.getName().toLowerCase().contains(lowerQuery)) {
                currentFiles.add(f);
                fileNames.add("📄 " + f.getName());
            }
        }

        adapter.clear();
        adapter.addAll(fileNames);
        adapter.notifyDataSetChanged();
    }

    private void onSaveClicked() {
        String filename = filenameEditText.getText().toString().trim();
        if (filename.isEmpty()) {
            Toast.makeText(activity, "请输入文件名", Toast.LENGTH_SHORT).show();
            return;
        }

        final File targetFile = new File(currentDir, filename);

        if (targetFile.exists()) {
            new AlertDialog.Builder(activity)
                .setTitle("确认覆盖")
                .setMessage("文件 \"" + filename + "\" 已存在，是否要覆盖它？")
                .setPositiveButton("覆盖", new DialogInterface.OnClickListener() {
                    @Override public void onClick(DialogInterface d, int which) {
                        FileSelector.setPath(targetFile.getAbsolutePath());
                        dialog.dismiss();
                        d.dismiss();
                    }
                })
                .setNegativeButton("取消", new DialogInterface.OnClickListener() {
                    @Override public void onClick(DialogInterface d, int which) {
                        d.dismiss();
                    }
                })
                .show();
        } else {
            FileSelector.setPath(targetFile.getAbsolutePath());
            dialog.dismiss();
        }
    }
}
