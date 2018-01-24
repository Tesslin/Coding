//https://www.geeksforgeeks.org/minimum-length-subarray-sum-greater-given-value/
#include <bits/stdc++.h>

using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n,x;
        scanf("%d%d",&n,&x);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int currSum=0,minLen=n+1;
        int start=0,end=0;
        while(end<n){
            while(currSum<=x&&end<n){
                if(currSum<=0&&x>0){
                    start=end;
                    currSum=0;
                }
                currSum+=a[end++];
            }
            while(currSum>x&&start<n){
                if(end-start<minLen)
                minLen=end-start;
                currSum-=a[start++];
            }
        }
        if(minLen==n+1)
        printf("Not possible\n");
        else
        printf("%d\n",minLen);
    }
    return 0;
}