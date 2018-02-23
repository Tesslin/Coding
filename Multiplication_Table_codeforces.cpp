//http://codeforces.com/problemset/problem/577/A
#include<iostream>
using namespace std;
int main()
{
    long long int n,x;
    scanf("%lld %lld",&n,&x);
    int count=0;
    for(int i=1;i<=n;i++){
    	if(x%i==0&&x/i<=n){
    	//	cout<<"dividing "<<x<<"/"<<i<<endl;
    		count++;	
    	}
    		
    }
    // if(x<=n)
    // count++;
	cout<<count<<endl;
    return 0;
}