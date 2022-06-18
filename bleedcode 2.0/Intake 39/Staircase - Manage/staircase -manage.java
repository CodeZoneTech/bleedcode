import java.io.*;
import java.util.*;
import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        int flat = in.nextInt();

//        int m = t-flat;

        for(int i=0; i<(t-t/2)-1; i++){
            for(int j=t+flat-2;j>i; j--){
                System.out.print(" ");
            }
            for(int j=0; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i=0; i<t/2; i++){
            System.out.print(" ");
        }
        for(int i=0; i<(t-t/2)+flat-1; i++){
            System.out.print("*");
        }
        System.out.println();
        for(int i=0; i<t/2; i++){
            for(int j=(t/2)-i; j>1; j--){
                System.out.print(" ");
            }
            for(int j=(t/2)-i; j<=t+flat-1; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
}