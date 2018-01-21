#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        if((sum+(i*(i+1))/2)<=n)
        sum+=(i*(i+1)/2);
        else
        break;
    }
    printf("%d",i-1);
    return 0;
}