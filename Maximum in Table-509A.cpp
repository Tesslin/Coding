//http://codeforces.com/problemset/problem/509/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    scanf("%d",&a);
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            if(i==0||j==0)
                arr[i][j]=1;
            else
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    cout<<arr[a-1][a-1]<<endl;
    return 0;
}