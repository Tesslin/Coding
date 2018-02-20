
//http://codeforces.com/problemset/problem/432/A
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	int arr[2001];
	int persons=0;
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]+b<=5)
			persons++;
	}
	cout<<persons/3<<endl;
	return 0;
}