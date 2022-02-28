import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

     public static BigInteger factorial(Long number) {
        BigInteger factorial = BigInteger.ONE;

        for (Long i = number; i > 0; i--) {
            factorial = factorial.multiply(BigInteger.valueOf(i));
        }

        return factorial;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        Long n = in.nextLong();
        
        System.out.println(factorial(n));


    }
}