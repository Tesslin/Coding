#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int percentage[n];
	double totalPercentage=0.00;
	for(int i=0;i<n;i++){
		scanf("%d",&percentage[i]);
		totalPercentage+=((double)percentage[i]/100);
	}
	double totalFraction=totalPercentage/n;
	cout<<totalFraction*100<<endl;
	// your code goes here
	return 0;
}