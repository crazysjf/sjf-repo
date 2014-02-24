BinderStudy
===========
学习binder用的简单测试程序。分服务器端和客户端，客户端通过binder调用服务器端的函数，打印结果。

编译
====
整个文件夹拷贝至Android源码目录，进入后执行mm，可以得到两个可执行文件：BinderStudyServer和BinderStudyClient_main，分别为服务器端和客户端。

执行
====
Android启动之后，在一个控制台中（串口或者adb shell）先运行BinderStudyServer，然后在另一个控制台中运行BinderStudyClient。

问题
====
在同一个控制台中后台运行server，前台运行client会失败，原因不明。
