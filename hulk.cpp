//http://codeforces.com/problemset/problem/705/A
#include<bits/stdc++.h>
using namespace std;
int main(){
     string hate= " I hate";
     string love = " I love";
     string connector = " that";
     string end = " it";
     int n,temp;
     scanf("%d",&n);
     temp=1;
 //    if(n==1)
	// printf("I hate");
     while(temp<=n){
     	
     		if(temp%2!=0){
	     		cout<<hate;
	     		if(temp<n)
	     		cout<<connector;	
     		}
     		
     		else{
     			cout<<love;	
     			if(temp<n)
     			cout<<connector;
     		    }
     		
     	temp++;
     }
     cout<<end;
     
    return 0;
}