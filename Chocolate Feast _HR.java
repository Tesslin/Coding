//https://www.hackerrank.com/challenges/chocolate-feast/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int chocolateFeast(int n, int c, int m) {
        // Complete this function
        int wrappers=0,chocolates=0,newWrapper=0;
        wrappers+=n/c;
        chocolates+=n/c;
        while(wrappers>=m){
            newWrapper=wrappers/m;
            chocolates+=wrappers/m;
            wrappers=newWrapper+wrappers%m;
            //wrappers=wrappers+wrappers%m;
        }
        return chocolates;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            int c = in.nextInt();
            int m = in.nextInt();
            int result = chocolateFeast(n, c, m);
            System.out.println(result);
        }
        in.close();
    }
}
