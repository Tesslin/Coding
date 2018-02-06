

//https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/monk-and-nice-strings-3/
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
    string s[10000];
    for(int i=0;i<T;i++)
        cin>>s[i];
   for(int i=0;i<T;i++){
        int count=0;
        for(int j=0;j<i;j++)
            if(s[j]<s[i])
                count++;
        cout<<count<<endl;
    }
    
    return 0;
}