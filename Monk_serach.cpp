
//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monk-and-search-2/
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
	unsigned long x,n;
    unsigned int q;
    char c;
    cin>>n;
    vector<unsigned long> arr(n);
    for(unsigned int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    cin>>q;
    while(q--)
    {
        int i = 0;
        cin>>c>>x;
        if(c == '0')
            cout<<n - (lower_bound(arr.begin(),arr.end(),x) - arr.begin())<<"\n";
        else
            cout<<n - (upper_bound(arr.begin(),arr.end(),x) - arr.begin())<<"\n";
    }
}