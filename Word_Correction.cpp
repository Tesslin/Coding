//http://codeforces.com/contest/938/problem/A
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
//#define gc getchar_unlocked
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
int top=-1;

int main(){
    FAST;
    int n,i;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
    	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
    		for(int j=i+1;j<s.length();j++){
    			if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='y')
    			{
    				s.erase (s.begin()+(j));
    				//cout<<s<<endl;
    				j--;
    			}
    			else
    			{
    				i=j;
    				break;
    			}
    		}
    	}
    }
    cout<<s<<endl;