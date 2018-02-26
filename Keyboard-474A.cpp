
//http://codeforces.com/problemset/problem/474/A
#include <bits/stdc++.h>

using namespace std;

int main() {
    char keyboard[100]="qwertyuiopasdfghjkl;zxcvbnm,./";
    char direction[2];
    char input[100];
    cin>>direction;
    cin>>input;
    int inputLen=strlen(input);
    int keyboardLen=strlen(keyboard);
    if(direction[0]=='L'){
        for(int i=0;i<inputLen;i++){
            for(int j=0;j<keyboardLen;j++){
                if(input[i]==keyboard[j]){
                    printf("%c",keyboard[j+1]);
                    break;
                }
                    
            }
        }
    }
    if(direction[0]=='R'){
        for(int i=0;i<inputLen;i++){
            for(int j=0;j<keyboardLen;j++){
                if(input[i]==keyboard[j]){
                    printf("%c",keyboard[j-1]);
                    break;
                }
            }
        }
    }
    return 0;
}