//http://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;
bool findLarger(int limak,int year,int bob){
	
	if(limak*pow(3,year)>bob*pow(2,year))
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
	check=findLarger(a,i,b);
	i++;
	}
	while(check==false);
	cout<<i-1<<endl;
	return 0;
}