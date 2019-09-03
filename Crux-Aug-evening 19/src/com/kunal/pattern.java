package com.kunal;

import java.util.Scanner;

public class pattern {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int i = 1;
        while (i <=2*n-1) {
            int col = 1;
            while (col<= n - i)
            {
                System.out.print("*");
                col = col + 1;
            }
                int sp = 1;
                while (sp <= 2 * i - 1)
                {
                    System.out.print("  ");
                    sp = sp + 1;
                }
                System.out.println();
                i = i + 1;
            }
        }
    }



