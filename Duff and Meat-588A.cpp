
//http://codeforces.com/problemset/problem/588/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int minimumPrice=INT_MAX,totalAmount=0;
    while(n--){
        int meatRequired,amountPerKg;
        scanf("%d %d",&meatRequired ,&amountPerKg);
        if(amountPerKg<minimumPrice)
            minimumPrice=amountPerKg;
        totalAmount+=(meatRequired*minimumPrice);
    }
    printf("%d",totalAmount);
    
    return 0;
}