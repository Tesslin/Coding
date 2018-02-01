//https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/practice-problems/algorithm/monk-and-inversions-arrays-strings/
include <bits/stdc++.h>
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
    T=read();int x1,y1,x2,y2,x3,y3;
    while(T--){
        int n;
        n=read();
        int a[n][n];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=read();
        int count=0;
        int k=0,l=0;
        while(k<n&&l<n){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                     if(a[k][l]>a[i][j]&&k<=i&&l<=j){
                         count++;
                         //cout<<a[x1][y1]<<" "<<a[x3][y3]<<endl;
                     }
                     
                }
            }
            l++;
            if(l==n){
                k++;
                l=0;
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
}