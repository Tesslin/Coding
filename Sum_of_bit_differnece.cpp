
//https://practice.geeksforgeeks.org/problems/find-sum-of-different-corresponding-bits-for-all-pairs/0
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        int a[n];int ans=0;
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int i=0;i<32;i++){
            int count=0;
            for(int j=0;j<n;j++)
                if(a[j]&(1<<i))
                count++;
                ans+=(count*(n-count)*2);
        }
        
        printf("%d\n",ans);
    }
    return 0;
}