
//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/monk-teaches-palindrome/
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
        string s;
        cin>>s;
        //cout<<s<<endl;
        int len=s.length();bool flag=true;
        for(int i=0;i<=len/2;i++){
            if(s[i]!=s[len-i-1]){
                flag=false;
                break;
            }
                
        }
        if(flag){
            if(len%2==0)
             printf("YES EVEN\n");
             else
             printf("YES ODD\n");
        }
        else
        printf("NO\n");
    }
    
    return 0;
}