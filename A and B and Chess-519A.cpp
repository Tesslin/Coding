//http://codeforces.com/problemset/problem/519/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    char chessBoard[8][8];
    int white=0,black=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>chessBoard[i][j];
            switch(chessBoard[i][j]){
                case 'Q': white+=9;
                    break;
                case 'q':black+=9;
                    break;
                case 'R':white+=5;
                    break;
                case 'r':black+=5;
                    break;
                case 'B':white+=3;
                    break;
                case 'b':black+=3;
                    break;
                case 'N':white+=3;
                    break;
                case 'n':black+=3;
                    break;
                case 'P':white+=1;
                    break;
                case 'p':black+=1;
                    break;
           
            }
        }
        
    }
      //cout<<"white = "<<white<<"black = "<<black<<endl;  
    if(white>black)
        printf("White");
    else if(black>white)
        printf("Black");
    else
        printf("Draw");
    return 0;
}