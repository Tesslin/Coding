
//https://www.hackerearth.com/practice/algorithms/sorting/merge-sort/practice-problems/algorithm/monk-and-modulo-based-sorting/
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
        int n,k;
        n=read();k=read();
        vector<int>vi(n);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            vi[i]=read();
            v[i]=make_pair(vi[i]%k,i);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
            printf("%d ",vi[v[i].second]);
                
        
    return 0;
}