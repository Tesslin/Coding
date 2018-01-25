
//https://www.geeksforgeeks.org/count-pairs-with-given-sum/
#include <bits/stdc++.h>
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
         printf("%d\n",twice_count/2);
    }
    
    return 0;
}