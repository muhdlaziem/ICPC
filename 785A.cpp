#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, res=0;
    scanf("%d",&N);
    while(N--){
        string S;
        cin>> S;
        if(S[0]=='T') res+=4;
        if(S[0]=='C') res+=6;
        if(S[0]=='O') res+=8;
        if(S[0]=='D') res+=12;
        if(S[0]=='I') res+=20;
    }
    printf("%d\n",res);
    return 0;
}