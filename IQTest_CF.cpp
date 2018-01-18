#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int arr[n];int countOdd=0,countEven=0,indexOdd,indexEven;
	for(int i=0;i<n;i++){
	  scanf("%d",&arr[i]);	
	  if(arr[i]%2==0){
	    countEven++;
	    indexEven=i+1;
	  }
	  
	  else{
	   countOdd++;
	   indexOdd=i+1;
	  }
	 
	}
	if(countOdd>countEven)
	printf("%d",indexEven);
	else
	printf("%d",indexOdd);
	// your code goes here
	return 0;
}