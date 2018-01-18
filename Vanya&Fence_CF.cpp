#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,height;
	scanf("%d%d",&n,&height);
	int heights[n];
	int width=0;
	for(int i=0;i<n;i++){
		scanf("%d",&heights[i]);
		if(heights[i]>height)
		width+=2;
		else
		width++;
	}
	printf("%d",width);
	// your code goes here
	return 0;
}