
//http://codeforces.com/problemset/problem/270/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int angle;
        scanf("%d",&angle);
        if(360%(180-angle)==0)
            printf("YES\n");
            else
            printf("NO\n");
    }
    return 0;
}