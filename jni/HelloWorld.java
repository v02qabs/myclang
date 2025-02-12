public class HelloWorld {
    // ネイティブメソッドの宣言
    private native void hello();

    public static void main(String[] args) {
        HelloWorld hw = new HelloWorld();
        hw.hello(); // ネイティブメソッドの呼び出し
    }

    // ネイティブライブラリの読み込み
    static {
        System.loadLibrary("hello"); // libhello.so (Linux) または hello.dll (Windows)
    }
}
