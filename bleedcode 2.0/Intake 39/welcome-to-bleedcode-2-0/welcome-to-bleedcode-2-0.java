import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        Long n1 = in.nextLong();

        if(n1>0){
            System.out.println("Hi!");
            System.out.println(s+ " "+n1);
        }
    }
}