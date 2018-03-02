//http://codeforces.com/problemset/problem/149/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int expected;
    scanf("%d",&expected);
    int growth[12];
    for(int i=0;i<12;i++)
        scanf("%d",&growth[i]);
    sort(growth,growth+12);
    int sum=0,count=0;
    if(expected){
        for(int i=11;i>=0;i--){
        //cout<<"growth = "<<growth[i]<<endl;
            sum+=growth[i];
            if(sum>=expected)
                break;
            else
                count++;
        }
        if(sum<expected)
            printf("-1");
        else
        cout<<count+1<<endl;
    }
    else
    cout<<"0"<<endl;
    return 0;
}