
//https://practice.geeksforgeeks.org/problems/convert-array-into-zig-zag-fashion/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        int zig[n];
        for(int i=0;i<n;i++)
        scanf("%d",&zig[i]);
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(flag){
                if(zig[i]>zig[i+1])
                swap(zig[i],zig[i+1]);
                
            }
            else{
                if(zig[i]<zig[i+1])
                swap(zig[i],zig[i+1]);
            }
            flag=!flag;
        }
        for(int i=0;i<n;i++)
        printf("%d ",zig[i]);
        printf("\n");
    }
    return 0;
}