package com.cryptopp.prng;

public class PRNG {

    static {
        System.loadLibrary("stlport_shared");
        System.loadLibrary("cryptopp");
        System.loadLibrary("prng");
    }


    public native String stringNdk();



    //private static Object lock = new Object();


}