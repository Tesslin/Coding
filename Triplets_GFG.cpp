
//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n,sum,countTriplets=0;
        scanf("%d%d",&n,&sum);
        int arr[n];
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                if(arr[i]+arr[j]+arr[k]>=sum)
                    k--;
                    else
                    {
                       countTriplets+=(k-j);
                       j++;
                    }
            }
        }
        printf("%d\n",countTriplets);
    }
    return 0;
}