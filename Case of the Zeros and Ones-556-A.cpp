
//http://codeforces.com/problemset/problem/556/A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int odd=0,even=0;
    for(int i=0;i<n;i++){
    	if(s[i]=='1')
    	odd++;
    	else
    	even++;
    }
    cout<<n-2*min(odd,even)<<endl;
    return 0;
}