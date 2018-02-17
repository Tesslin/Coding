
//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/tutorial/

/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
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
int top=-1;
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
void push(ll stacks[],ll cost)
{
    top=top+1;
    stacks[top]=cost;
}
void pop(ll stacks[]){
    pfl(stacks[top--]);
    //top=top-1;
    pfn;
}
int main(){
    FAST;
    int q,num;
	sf(q);
	num=q;
	ll stacks[num];
    while(q--)
    {
        int type;
        sf(type);
        if(type==1){
            if(top==-1)
            printf("No Food\n");
            else
            pop(stacks);
        }
        if(type==2){
            ll cost;
            sfl(cost);
            if(top!=max-1)
                push(stacks,cost);
            
        }
    }
}