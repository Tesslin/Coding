
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/circular-distance-3/
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
	int n;
	sf(n);int i;
	double distance[n];
	fori(i,n){
	    ll x,y;
	    sfl(x);sfl(y);
	    distance[i]=sqrt(x*x+y*y);
	}
	sort(distance,distance+n);
	int q;
	sf(q);
	while(q--){
	    ll r;
	    sfl(r);
	    int low=0,high=n;
	    while(high>low){
	        int mid=(low+high)/2;
	        if(distance[mid]<=r)
	            low=mid+1;
	            else
	            high=mid;
	    }
	    pf(low);
	    pfn;
	}
	return 0;
}