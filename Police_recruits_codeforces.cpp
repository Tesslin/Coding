
//http://codeforces.com/problemset/problem/427/A
#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
 int n;
 scanf("%d",&n);
 int hired=0,caseRegistered=0,untreatedCase=0;
 while(n--){
 	int x;
 	scanf("%d",&x);
 	if(x==-1)
 		caseRegistered++;
 	else
 		hired+=x;
 	if(x<0)
 	{
 		if(hired>0)
 		{
 			hired--;
 		}
 		else
 			untreatedCase++;
 	}
 }
	
	cout<<untreatedCase<<endl;
	return 0;
}