import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
import java.util.Arrays;
    

public class Solution {
    public static double findMedian(int[] a) {
        Arrays.sort(a);
        int n = a.length;
        double m=0;
        if(n%2==1)
        {
            m=a[(n+1)/2-1];
        }
        else
        {
            m=(a[n/2-1]+a[n/2])/2;
        }
    
       return m;

    }
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int v = in.nextInt();
        int arr[] = new int[v];
        
        for(int i=0; i<v; i++){
            arr[i]=in.nextInt();
        }
        System.out.println((int)findMedian(arr));

    }
}
