#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,a,b;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	int pricePerTicketBasedOnMTicket=b/m;int moneyPaid=0;
	if(pricePerTicketBasedOnMTicket<=a){
	    if((n*a)<((n/m)*b)){
	        moneyPaid+=(n*a);
	        n=0;
	    }
	    
	    else{
	       moneyPaid+=((n/m)*b);
	       n%=m; 
	    }
	    
	}
	if(n){
	    if((n*a)>(b))
		moneyPaid+=b;
    	else
    	moneyPaid+=(n*a);
	}
	
	printf("%d",moneyPaid);
	
	// your code goes here
	return 0;
}