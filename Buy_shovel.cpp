//http://codeforces.com/problemset/problem/732/A
#include <iostream>
using namespace std;
bool checkNumberOfShovels(int a, int i,int r){
	
	if((a*i)%10==r||(a*i)%10==0)
	return true;
	else
	return false;
}
int main() {
	// your code goes here
	int a,b;
	scanf("%d %d",&a,&b);
	int i=1;bool check=false;
	do{
	check=checkNumberOfShovels(a,i,b);
	i++;
	}
	while(check==false);
	cout<<i-1<<endl;
	return 0;
}