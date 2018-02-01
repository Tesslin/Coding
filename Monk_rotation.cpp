
//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monk-and-rotation-3/description/
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
        n=read();k=read();
        int a[n];
        for(int i=0;i<n;i++)
                a[i]=read();
        int shiftPos=(k>n)?(n-k%n):n-k;
        //cout<<"shiftPos ="<<shiftPos<<" "<<endl;
        for(int i=shiftPos;i<n;i++)
            printf("%d ",a[i]);
        for(int i=0;i<shiftPos;i++)
            printf("%d ",a[i]);
           
        printf("\n");
    }
    
    return 0;
}