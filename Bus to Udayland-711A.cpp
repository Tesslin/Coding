
//http://codeforces.com/problemset/problem/711/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d",&n);bool flag=false;
    cin.ignore(256,'\n');
    char arr[n][6];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
       if((arr[i][0]=='O'&&arr[i][1]=='O')){
           flag=true;
           arr[i][0]='+';
           arr[i][1]='+';
           break;
       }
       if((arr[i][3]=='O'&&arr[i][4]=='O')){
           flag=true;
           arr[i][3]='+';
           arr[i][4]='+';
           break;
       }
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++)
                cout<<arr[i][j];
            cout<<endl;
        }
    }
    else
    printf("NO\n");
    
    return 0;
}