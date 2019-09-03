package com.kunal;

import java.util.Scanner;

public class Diamond {
    static int a = 30;
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        System.out.println(a);
        int row = 1;
        int k = 1;
        int p=1;
                while(p>=1-2*n){
        while (k <= 2 * n - 1) {
            int sp = 1;
            while (sp <= n - row) {
                System.out.print(" ");
                sp = sp + 1;
            }
            int col = 1;
            while (col <= row) {
                System.out.print("*");
                col = col + 1;
            }
            System.out.println();
            if (k < n) {
                row = row + 1;
            } else {
                row = row - 1;
            }
            k = k + 1;
            if (p < n) {
                row = row - 1;
            } else {
                row = row + 1;
            }
            k = k + 1;
        }
        p=p+1;
        }
        }
    }


