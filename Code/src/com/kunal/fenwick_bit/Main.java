package com.kunal.fenwick_bit;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int[] bit = new int[n+1];

        // build the bit : O(NLogN)
        for (int i = 1; i <= n; i++) {
            bit[i] = s.nextInt();
            update(i, bit[i], n, bit);
        }
    }

    // O(LogN)
    private static void update(int i, int value, int n, int[] bit) {
        while(i <= n) {
            bit[i] += value;
            i += (i & (-i));
        }
    }

    // O(LogN) : Range max Query
    private static void updateMax(int i, int value, int n, int[] bit) {
        while(i <= n) {
            bit[i] = Math.max(bit[i], value);
            i += (i & (-i));
        }
    }

    // sum till ith index : O(LogN)
    public static int query(int i, int[] bit) {
        int sum = 0;
        while(i >= 0) {
            sum += bit[i];
            i -= (i & (-i));
        }
        return sum;
    }
}
