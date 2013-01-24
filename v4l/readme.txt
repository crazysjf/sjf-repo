= V4L2的示例程序=

该程序运行在A10开发板上，直接在控制台上运行，用来学习V4L2的开发，以及检测
CSI接口是否工作正常。

== 编译，安装，运行 ==

make && adb push v4l2-example /

用adb shell登录进A10的shell，执行/v4l2-example

== 笔记 ==

最初的代码参考采用了V4L2官方的示例代码，但在A10上无法运行。参考安卓中的代
码，发现其中缺少xioctl(fd, VIDIOC_S_INPUT, &inp)步骤。
