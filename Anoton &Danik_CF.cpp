#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	scanf("%d",&n);
	cin>>s;
	int countA=0,countD=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A')
		countA++;
		else
		countD++;
	}
	if(countA==countD)
	printf("Friendship");
	if(countA>countD)
	printf("Anton");
	if(countD>countA)
	printf("Danik");
	// your code goes here
	return 0;
}