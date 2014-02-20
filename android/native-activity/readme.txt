Native Activity

从NDK的samples文件夹中拷贝出来。
为了正常使用，把AndroidManifest.xml中的android:hasCode="false"改为了android:hasCode="true"。

编译：
 - 进入jni文件夹，执行ndk-build;
 - 在eclipse中编译成.apk；

下载运行即可。