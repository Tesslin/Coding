#include <bits/stdc++.h>
//https://www.geeksforgeeks.org/?p=484
using namespace std;
#define gc getchar_unlocked
#define max 100000
inline int read(){
    int n=0;
    char ch=gc();
    while(ch<48)
        ch=gc();
    while(ch>47){
        n=(n<<1)+(n<<3)+(ch-48);
        ch=gc(); 
    }
    return n;   
}
int main() {
    int T; 
    T=read();
    while(T--){
        int n,k;
        n=read();
        k=read();
        int a[n];
        for(int i=0;i<n;i++)
        a[i]=read();
        unordered_map<int,int>hashMap;
        int twice_count=0;
        for(int i=0;i<n;i++)
        hashMap[a[i]]++;
        for(int i=0;i<n;i++){
            twice_count+=hashMap[k-a[i]];
            if(k-a[i]==a[i])
            twice_count--;
        }
         if(twice_count)
         printf("Yes\n");
         else
         printf("No\n");
    }
    
    return 0;
}