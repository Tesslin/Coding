
//http://codeforces.com/problemset/problem/707/A
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int coloured=0,black_White=0;
    char colors[n][m];
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++){
    		cin>>colors[i][j];
    		if(colors[i][j]=='C'||colors[i][j]=='M'||colors[i][j]=='Y')
    			coloured++;
    		else
    			black_White++;
    	}
    		
    }
    if(coloured)
    printf("#Color");
    else
    printf("#Black&White");
    return 0;
}