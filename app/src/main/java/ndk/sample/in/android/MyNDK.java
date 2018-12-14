package ndk.sample.in.android;

public class MyNDK {

    static {
        System.loadLibrary("MyLibrary");
    }

    public native String getMyString();
    public native int sum(int a);
}