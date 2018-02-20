
//http://codeforces.com/problemset/problem/540/A
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	 int n;string a,b;
	scanf("%d",&n);
	cin.ignore(256,'\n');
	cin>>a>>b;
	//cout<<a<<endl;
	int rem1,rem2;int moves=0,i=n-1;
	while(i>=0){
		//cout<<(int)a[i]<<endl;
		rem1=(int)a[i]%10;
		//a[/=10;
		rem2=(int)b[i]%10;
		//b/=10;
		//cout<<"rem1 = "<<rem1<<"rem2 = "<<rem2<<endl;
		int diff= (rem1>rem2)?rem1-rem2:rem2-rem1;
		//cout<<"diff = "<<diff<<endl;
		if(diff>5)
		{
			moves+=((10-max(rem1,rem2))+min(rem1,rem2));
			//cout<<"moves when greater than 5 = "<<((10-max(rem1,rem2))+min(rem1,rem2))<<endl;
		}
		else
		moves+=diff;
		i--;
	}
	cout<<moves<<endl;
	return 0;
}