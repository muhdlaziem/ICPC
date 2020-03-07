#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N;

void gen(string S, int front, int back){
    if(S.length()==N*2){
        cout<< S << endl; return;
    }
    if(front>0) gen(S + "(", front-1, back);
    if(back>0 && back>front) gen(S+")", front, back-1);
}
int main(){
    scanf("%d",&N);
    gen("",N, N);
    return 0;
}