//http://codeforces.com/problemset/problem/758/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    long int welfare[n];
    for(int i=0;i<n;i++)
        scanf("%ld",&welfare[i]);
    sort(welfare,welfare+n);
    int moneyRequired=0;
    for(int i=0;i<n-1;i++){
        moneyRequired+=(welfare[n-1]-welfare[i]);
    }
    printf("%d",moneyRequired);
    return 0;
}