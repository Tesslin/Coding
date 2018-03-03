//http://codeforces.com/problemset/problem/158/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
     int group[n];
    for(int i=0;i<n;i++)
        scanf("%d",&group[i]);
    int taxi=0,buffer=0;
    sort(group,group+n);
    for(int i=n-1, j=0;i>=j;i--){
        buffer+=group[i];
        for(;j<i;j++){
            buffer+=group[j];
            if(buffer>4)
            {
                buffer=0;
                break;
            }
        }
        taxi++;
    }
    
    printf("%d",taxi);
    return 0;
}