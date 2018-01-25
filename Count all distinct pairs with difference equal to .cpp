//https://www.geeksforgeeks.org/count-pairs-difference-equal-k/
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
        int a[n];
        for(int i=0;i<n;i++)
        a[i]=read();
        k=read();
        int count=0;
        int hashMap[max]={0};
        for(int i=0;i<n;i++)
        hashMap[a[i]]++;
        for(int i=0;i<n;i++){
            int x=a[i];
            if(k){
                if(x-k>=0&&hashMap[x-k])
                    count++;
                else if(x+k<max&&hashMap[x+k])
                    count++;
            }
            else{
                if(hashMap[a[i]]>1)
                count++;
            }
            hashMap[x]=0;
        }
        printf("%d\n",count);
    }
    
    return 0;
}