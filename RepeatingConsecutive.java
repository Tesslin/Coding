import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  
  static void findConsecutiveChar(String str){
    int count=0,current_count=0;
    char ch=str.charAt(0);
    int len=str.length();
    for(int i=0;i<len-1;i++){
      if(str.charAt(i)==str.charAt(i+1)){
        count++;
      }
      else{
        if(count>current_count){
          current_count=count;
          ch=str.charAt(i);
        }
        count=0;
      }
    }
    System.out.println(ch);
  }
  public static void main(String[] args) {
    String str = "aaaabbbbbbbaaccde";
    findConsecutiveChar(str);
  }
}
