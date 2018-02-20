//http://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	int diffSocks = (a<b)?a:b;
	int sameSocks = (a-diffSocks>0)?(a-diffSocks)/2:(b-diffSocks)/2;
	cout<<diffSocks<<" "<<sameSocks<<endl;
	return 0;
}