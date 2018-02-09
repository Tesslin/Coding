
//https://www.hackerearth.com/problem/algorithm/monk-being-monitor/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define gc getchar_unlocked
#define ll long long int
#define fori(i,n) for(int i=0;i<n;i++)
#define forl(i,n) for(ll i=0;i<n;i++)
#define rfori(i,n) for(int i=n-1;i>=0;i--)
#define findmax(a,b) (a>b)?a:b
#define findmin(a,b) (a<b)?a:b
#define max INT_MAX
#define min INT_MIN
#define lmax LONG_MAX
#define lmin LONG_MIN
#define ig cin.ignore(256,'\n')
#define pb push_back
#define mk make_pair
#define sf(n) scanf("%d",&n)
#define sfl(n) scanf("%lld",&n)
#define sfu(n) scanf("%llu",&n)
#define pf(n) printf("%d",n)
#define pfl(n) printf("%lld",n)
#define pfn  printf("\n")
#define vi vector<int>
#define vii vector<int,int>
#define FAST ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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
int main(){
	FAST;
	int T;
	for(sf(T);T--;){
	    int freq[1000001]={0};
		int n;
		sf(n);
		vi a;
		fori(i,n){
			int t;
			sf(t);
			a.pb(t);
			freq[t]++;
		}
		int maximum=min,minimum=max;
		for(int i =1;i<1000001;i++){
		    if(freq[i]>maximum)
		        maximum=freq[i];
		    if(freq[i]<minimum&&freq[i]!=0)
		        minimum=freq[i];
		}
		//cout<<"max= "<<maximum<<"min= "<<minimum<<endl;
		printf("%d\n",maximum==minimum?-1:maximum-minimum);
	}
}