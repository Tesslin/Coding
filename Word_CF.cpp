#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int len=s.length();
	int countUpper=0,countLower=0;
	for(int i=0;i<len;i++){
		if(isupper(s[i]))
		countUpper++;
		else
		countLower++;
	}
	if((countUpper==countLower)||(countLower>countUpper))
	transform(s.begin(),s.end(),s.begin(),::tolower);
	else
	transform(s.begin(),s.end(),s.begin(),::toupper);
	cout<<s<<endl;
	return 0;
}