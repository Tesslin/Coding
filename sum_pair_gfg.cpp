//https://practice.geeksforgeeks.org/problems/find-all-pairs-whose-sum-is-x/0
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; 
    for(scanf("%d",&T);T--;){
        int n,m,x;
        scanf("%d%d%d",&n,&m,&x);
        int a[n],b[m];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int j=0;j<m;j++)
        scanf("%d",&b[j]);
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        s.insert(a[i]);
        for(int j=0;j<m;j++){
            if(s.find(x-b[j])!=s.end())
                printf("%d %d,",x-b[j],b[j]);
        }
        printf("\n");
    }
    return 0;
}