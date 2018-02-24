
//http://codeforces.com/problemset/problem/579/A
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);
    int count=0;
    while(n>0){
    	if(n&1){
    		count++;
    		n--;
    	}
    	else
    	n/=2;
    }
    cout<<count<<endl;
    return 0;
}