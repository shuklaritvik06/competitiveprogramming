package com.kunal.recursionNbacktracking;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Demo {
    public static void main(String[ ] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> list = new ArrayList<>( );

        while(true) {
            String s = in.nextLine();
            if(s.equals("")) {
                break;
            }
            else {
                list.add(s);
            }
        }
        System.out.println(list);
    }
}
