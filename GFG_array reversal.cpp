
//https://practice.geeksforgeeks.org/problems/special-array-reversal/0
#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    for(scanf("%d",&T);T--;){
        string s;
        cin>>s;
        int len=s.length();
        char temp;int j=len-1;
        bool alphaFront=false,alphaBack=false;
        for(int i=0;i<j;){
            alphaFront=(isalpha(s[i]))?true:false;
            alphaBack=(isalpha(s[j]))?true:false;
            if(alphaBack&&alphaFront){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;j--;
            }
            if(!alphaFront)
            i++;
            if(!alphaBack)
            j--;
            
        }
        cout<<s<<endl;
    }
    
    return 0;
}