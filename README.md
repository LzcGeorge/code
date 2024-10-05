# code

刷题之前，先创建文件夹，为了便于定位，在对应文件夹内创建新的文件。

```python
# 尝试获取当前活动文件的所在目录
file_name = sublime.active_window().active_view().file_name()
if file_name:
    dirc = os.path.dirname(file_name) + "/"
else:
        # 使用 Sublime Text API 获取当前打开的文件夹路径
    folders = sublime.active_window().folders()
    if folders:
        dirc = folders[0] + "/"  # 使用当前打开的文件夹路径
```

