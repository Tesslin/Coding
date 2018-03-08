//https://www.hackerrank.com/challenges/migratory-birds/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int migratoryBirds(int n, int[] ar) {
        // Complete this function
        int[] freq = new int[6];
        Arrays.fill(freq,0);
        for(int i=0;i<n;i++){
            freq[ar[i]]++;
        }
        int max=0,pos=0;
        for(int i=1;i<=5;i++){
            if(freq[i]>max){
                max=freq[i];
                pos=i;
            }
            else{
                if(freq[i]==max)
                {
                    if(i<pos)
                        pos=i;
                }
            }
        }
        return pos;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}
