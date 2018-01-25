//https://practice.geeksforgeeks.org/problems/faithful-numbers/0
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        long ans=0,power=1;
        while(n){
            if(n&1)
            ans+=power;
            power*=7;
            n>>=1;
        }
        printf("%ld\n",ans);
    }
    return 0;
}