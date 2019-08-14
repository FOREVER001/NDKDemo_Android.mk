package com.tianzhuan.ndkdemo_1;

public class NDKTools {
    static {
        System.loadLibrary("ndkdemotest-jni");
    }
    public static native String getStringFromNDK();
}
