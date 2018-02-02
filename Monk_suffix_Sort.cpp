
//https://www.hackerearth.com/problem/algorithm/monk-and-suffix-sort/
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
        int k;
        string s;
        cin>>s;
        k=read();
        int len=s.length();
        vector<string>v(len);
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                v[i].push_back(s[j]);
            }
        }
        sort(v.begin(),v.end());
        // 
        cout<<v[k-1]<<endl;
        // sort(v.begin(),v.end());
        // for(int i=0;i<n;i++)
        //     printf("%d ",vi[v[i].second]);
                
        
    return 0;
}