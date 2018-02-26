
//http://codeforces.com/problemset/problem/703/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int mishikaWon=0,chrisWon=0;
    while(n--){
        int mishka,chris;
        scanf("%d %d",&mishka,&chris);
        if(mishka>chris)
            mishikaWon++;
        if(chris>mishka)
            chrisWon++;
    }
    if(mishikaWon>chrisWon)
        printf("Mishka");
    else if(chrisWon>mishikaWon)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
        
    return 0;
}