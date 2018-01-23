//https://practice.geeksforgeeks.org/problems/smallest-number-subset/0
#include <bits/stdc++.h>

using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int res=1;
        for(int i=0;i<n&&a[i]<=res;i++){
            res+=a[i];
        }
        
        printf("%d\n",res);
    }
    return 0;
}