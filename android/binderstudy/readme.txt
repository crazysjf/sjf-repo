学习binder用的简单测试程序。分服务器端和客户端，客户端通过binder调用服务器端的函数，打印结果。

编译
====

整个文件夹拷贝至Android源码目录，进入后执行mm，可以得到两个可执行文件：BinderStudyServer和BinderStudyClient_main，分别为服务器端和客户端。

执行
====

在控制台中先后台执行BinderStudyServer，然后运行BinderStudyClient。

目前工作不正常，BinderStudyClient会死掉。

 
