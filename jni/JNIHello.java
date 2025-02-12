
public class JNIHello {
    static {
        System.loadLibrary("JNIHello");
    }
    public static native void main(String[] args){}
}
