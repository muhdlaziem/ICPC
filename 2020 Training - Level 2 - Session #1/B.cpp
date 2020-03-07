#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N,H;

void gen(string S, int one, int zero){
    if(S.length()==N){
        cout<< S << endl; return;
    }
    if(zero>0) gen(S + "0", one, zero-1);
    if(one>0) gen(S+"1", one-1,zero);
}
int main(){
    scanf("%d%d",&N, &H);
    gen("",H,N-H);
    return 0;
}