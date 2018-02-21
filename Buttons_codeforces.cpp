//http://codeforces.com/problemset/problem/268/B
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	scanf("%d",&n);
	cout<<n*(n-1)*(n+1)/6+n<<endl;
	return 0;
}