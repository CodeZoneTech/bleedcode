import java.io.*;
import java.util.*;
import java.util.Scanner;
import java.util.Vector;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sr = new Scanner(System.in);
        int n = sr.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i] = sr.nextInt();
        }
        int left[] = new int [n];
        int right[] = new int [n];
        Vector<Integer> product = new Vector<Integer>();
        left[0] = 1; //initialize the first element as 1
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]*arr[i-1]; // store the product till just previous index
        }
        right[n-1]=1;//initialzie the first element as 1
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]*arr[i+1]; //store the product till just next index
        }
        for(int i=0;i<n;i++)
        {
            product.add(left[i]*right[i]);
        }
        for(int i=0;i<n;i++)//display the product array
        {
            System.out.print(product.get(i)+" ");
        }
        
    }
}