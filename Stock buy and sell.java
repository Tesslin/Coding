import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  class Stock{
    int buy,sell;
  }
  void stockBuySell(int price[],int n){
    if(n==1)
      return ;
    int i=0,count=0;
    ArrayList<Stock> al=new ArrayList<Stock>();
    while(i<n-1){
      //find local minima
      while(i<n-1 && price[i]>=price[i+1])
        i++;
      
      if(i==n-1)
        break;
      Stock s=new Stock();
      s.buy=i++;
      while(i<n&&price[i]>=price[i-1])
        i++;
      s.sell=i-1;
      al.add(s);
      count++;
    }
    if(count==0)
      System.out.println("There is no day");
    else{
      for(int j=0;j<count;j++)
        System.out.println("buy on " + al.get(j).buy + "sell on " + al.get(j).sell);
    }
  }
  public static void main(String[] args) {
    Solution sol = new Solution();
    int price[] = {100, 180, 260, 310, 40, 535, 695};
    int n = price.length;
 
    sol.stockBuySell(price, n);  
  }
}
