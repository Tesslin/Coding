import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  static int lowest(int num3,int den3){
    return gcd(num3,den3);
  }
   static int gcd(int den1,int den2){
    if(den1==0)
      return den2;
    return gcd(den2%den1,den1);
  }
  static void addFraction(int num1,int den1,int num2,int den2){
    int num3=0,den3=0;
    den3=gcd(den1,den2);
    //System.out.println("gcd is "+den3);
    den3 = (den1*den2)/den3;
    num3 = (num1*den3)/den1+(num2*den3)/den2;
    int low =lowest(num3,den3);
    //System.out.println("lowest is "+low);
    String str="";               
   //str+=(Integer.toString(num3/low));
   //str+=(Integer.toString(den3/low));
   System.out.println((Integer.toString(num3/low))+ "/"+(Integer.toString(den3/low)));
    //return str;
  }
  public static void main(String[] args) {
    int num1=1, den1=500, num2=2, den2=1500, den3, num3;
   addFraction(num1,den1,num2,den2);
    //System.out.println(frac);
    
  }
}
