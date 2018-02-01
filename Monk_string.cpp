
//https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/little-monk-and-good-string/
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define max -100
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
    string s;
    cin>>s;
    int len=s.length(),maxLen=0;
    int count=0;
    for(int i=0;i<len;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
            if(count>maxLen)
             maxLen=count;
        }
        else
            count=0;
    }
    printf("%d",maxLen);
    return 0;
}