import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        BigInteger n = in.nextBigInteger();

        if(n.compareTo(BigInteger.valueOf(0))>0){
            System.out.println("Hi!");
            System.out.println(s+ " "+n);
        }
    }
}