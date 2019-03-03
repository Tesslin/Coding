import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  static void merge(int arr1[],int arr2[]){
    int len1=arr1.length;int len2 = arr2.length;
    int arr3 [] = new int [len1+len2];
    int k=0,i=0,j=0;
    while(i<len1&&j<len2){
      if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
      else
        arr3[k++]=arr2[j++];
    }
    while(i<len1)
      arr3[k++]=arr1[i++];
    while(j<len2)
      arr3[k++]=arr2[j++];
    for(int m=0;m<k;m++)
      System.out.println(arr3[m] + " ");
    System.out.println("Median is "+ (arr3[len1]+arr3[len1-1])/2);
  }
  
  public static void main(String[] args) {
    
    int arr1[]={1,12,15,26,38};
    int arr2[] = {2,13,17,30,45};
    merge(arr1,arr2);    
  }
}
