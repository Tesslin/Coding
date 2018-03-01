
//http://codeforces.com/contest/476/problem/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int x;
    if(m>n)
        x=-1;
    else{
        if(n%2==0)
            x=n/2;
        else
            x=n/2+1;
        while(x%m!=0)
            x++;
    }
    printf("%d\n",x);
    return 0;
}