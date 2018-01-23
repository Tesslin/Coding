
https://www.geeksforgeeks.org/length-largest-subarray-contiguous-elements-set-1/
#include <bits/stdc++.h>

using namespace std;
int min(int x,int y){
    return (x<y)?x:y;
}
int max(int x,int y){
    return(x>y)?x:y;
}
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int maxLen=1;
        for(int i=0;i<n-1;i++){
            int mn=a[i],mx=a[i];
            for(int j=i+1;j<n;j++){
                mn=min(mn,a[j]);
                mx=max(mx,a[j]);
                if(mx-mn==j-i)
                maxLen=max(maxLen,mx-mn+1);
            }
        }
        
        printf("%d",maxLen);
    }
    return 0;
}