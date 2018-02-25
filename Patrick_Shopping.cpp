#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int shop1, shop2,distanceBetweenShops;
	scanf("%d %d %d",&shop1,&shop2,&distanceBetweenShops);
	int totalDistance=0;
	bool flagShop1First=true;
	if(shop1==shop2&&shop2==distanceBetweenShops){
		//cout<<"hello"<<endl;
		totalDistance=(3*shop1);
		//cout<<3*shop1<<endl;
	}
	else{
		if(shop1<shop2){
		totalDistance+=shop1;
		}
		else
		{
			flagShop1First=false;
			totalDistance+=shop2;
		}
		if(shop1+shop2>distanceBetweenShops){
		if(flagShop1First){
			totalDistance+=distanceBetweenShops;
			if(shop2<distanceBetweenShops)
				totalDistance+=shop2;
				else
				totalDistance+=distanceBetweenShops+shop1;
			
		}
		else{
			totalDistance+=distanceBetweenShops;
			if(shop1<distanceBetweenShops)
			   totalDistance+=shop1;
			else
			   totalDistance+=distanceBetweenShops+shop2;
		}
	}
		else{
			if(flagShop1First){
				totalDistance+=shop1+(2*shop2);
			}
			else
				totalDistance+=shop2+(2*shop1);
		}	
	}
	
	cout<<totalDistance<<endl;
	return 0;
}

/*best ans 
cout<< min(min(2*(a+s),2*(a+d)), min(a+s+d,2*(d+s))) <<endl;*/