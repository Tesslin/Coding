
//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/monk-visits-coderland-4/
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
        int n;
        n=read();
        long a[n],c[n];unsigned long long int cost=0;
        for(int i=0;i<n;i++)
            c[i]=read();
        for(int i=0;i<n;i++)
            a[i]=read();
            long minimumCost=100005;
        for(int i=0;i<n;i++)
        {
            if(c[i]<minimumCost){
                minimumCost=c[i];
            }
            cost+=(a[i]*minimumCost);
        }
        
        printf("%llu\n",cost);
    }
    
    return 0;
}