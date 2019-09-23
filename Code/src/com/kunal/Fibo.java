package com.kunal;

public class Fibo {
    public static void main(String[] args) {
        long t1 = System.currentTimeMillis();
        System.out.println(fibo(50));
        long t2 = System.currentTimeMillis();

        System.out.println(t2 - t1);
    }
    public static int fibo(int n) {
        if(n < 2) {
            return n;
        }
        return fibo(n-1) + fibo(n-2);
    }
}
