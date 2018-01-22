
//https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        int pythagorean[n];
        for(int i=0;i<n;i++){
            scanf("%d",&pythagorean[i]);
            pythagorean[i]*=pythagorean[i];
        }
        
        bool flag=false;
        sort(pythagorean,pythagorean+n);
        for(int i=n-1;i>=2;i--){
            int l=0;int r=i-1;
            while(l<r){
                if(pythagorean[l]+pythagorean[r]==pythagorean[i])
                {
                    flag=true;
                    break;
                }
                (pythagorean[l]+pythagorean[r]>pythagorean[i])?r--:l++;
            }
        }
        if(flag)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}