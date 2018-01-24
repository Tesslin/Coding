
//https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0
#include <bits/stdc++.h>
struct stock{
    int buy;
    int sell;
};
using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        if(n==1){
            break;
        }
        int a[n];
        stock s[n/2+1];
        
         int count=0,i=0;
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        while(i<n-1){
            while(i<n-1&&a[i+1]<=a[i])
                i++;
            if(i==n-1)
            break;
            s[count].buy=i++;
            while(i<n&&a[i]>=a[i-1])
                i++;
            s[count].sell=i-1;
            count++;
        }
        if (count == 0)
        printf("No Profit");
        else
        {
           for (int i = 0; i < count; i++){
              printf("(%d %d) ", s[i].buy, s[i].sell);
           }
        }
        printf("\n");
    }
    return 0;
}