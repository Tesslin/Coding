
//http://codeforces.com/problemset/problem/230/A
#include<bits/stdc++.h>
using namespace std;
int main(){
     int s,n;bool flag=true;
    scanf("%d %d",&s,&n);
    vector<pair<int,int>>vect;
    for(int i=0;i<n;i++){
    	int ds,dbon;
        scanf("%d %d",&ds,&dbon);
        vect.push_back(make_pair(ds,dbon));
    }
    sort(vect.begin(),vect.end());
    int boss = vect[n-1].first;
    for(int i=0;i<n&&s<=boss;i++){
        if(s>vect[i].first)
            s+=vect[i].second;
            else
                break;
            //cout<<s<<endl;
    }
    if(s>boss)
    printf("YES");
    else
    printf("NO");
    return 0;
}