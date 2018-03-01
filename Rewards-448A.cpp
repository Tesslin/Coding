
//http://codeforces.com/problemset/problem/448/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1,a2,a3,b1,b2,b3;
    int shelves;
    scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&b1,&b2,&b3);
    scanf("%d",&shelves);
    int cups=a1+a2+a3;
    int medals=b1+b2+b3;
    if(shelves){
        if(cups&&cups<=5)
            shelves--;
        else {
            while(cups)
            {
                int remCups=cups%5;
                cups/=5;
                shelves-=cups;
                if(remCups==0)
                    break;
                else if(remCups<=5){
                    shelves--;
                    cups=0;
                }
                    
            }
            //cout<<"shelves left after cups = "<<shelves<<endl;
        }
        if(medals&&medals<=10)
            shelves--;
        else{
            while(medals)
            {
                int remMedals=medals%10;
                medals/=10;
                shelves-=medals;
                if(remMedals==0)
                    break;
                else if(remMedals<=10){
                    shelves--;
                    medals=0;
                }
                    
            }
        }
    }
    //cout<<"shelves = "<<shelves<<endl;
    if(shelves>=0)
        printf("YES");
    else
        printf("NO");
    return 0;
}