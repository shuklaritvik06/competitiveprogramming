package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int [][] building = new int[n][m+2];

        for (int i = 0; i <n ; i++) {
            String s = scanner.next();
            for (int j = 0; j <m+2 ; j++) {
                building[i][j] = s.charAt(j) - '0';
            }
        }
        boolean foundOne =false;
        int topZeroRow =0;
        for (int i = 0; i<n ; i++) {
            for (int j = 0; j <m+2 ; j++) {
                if (building[i][j] ==1){
                    foundOne = true;
                }
            }
            if (foundOne){
                break;
            }
            else{
                topZeroRow++;

            }
        }

        int[][] build = Arrays.copyOfRange(building , topZeroRow , n);
        System.out.println(caculate(n -1-topZeroRow, 0 , build));


    }

    private static int caculate(int floor, int door, int[][] building) {
        if (floor==-1){
            return 0;
        }

        int cost = 0;
        if (door ==0) {


            for (int i = door; i < building[0].length; i++) {
                if (building[floor][i] == 1) {
                    cost = i;
                }
            }
            if (floor == 0){
                return cost;
            }

            int left = caculate(floor-1 , 0 , building);
            int right = caculate(floor-1 , building[0].length-1 , building);
            return 1+Math.min(2*cost+ left, building[0].length-1+ right);

        }
        else {
            for (int i = building[0].length-1; i >=0 ; i--) {
                if (building[floor][i] == 1){
                    cost = building[0].length -1- i;
                }
            }
            if (floor == 0){
                return cost;
            }

            int left = caculate(floor-1 , 0 , building);
            int right = caculate(floor - 1 , building[0].length-1 , building);
            return 1 + Math.min( building[0].length -1 +  left, 2*cost+ right);
        }
    }
}
