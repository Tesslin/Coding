
//https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monk-and-binary-array-1/
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
        int n;
        n=read();
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=read();
            //cout<<"n= "<<n<<endl;
            int count=((n/2)+1)*(n-(n/2));
        printf("%d",count);
    
    return 0;
}