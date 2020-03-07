#include <bits/stdc++.h>
#define ll long long
using namespace std;

int N,res=0;
void solve(int i,int j){
    if(i==N && j==N){
        res++; return;
    }
    if(i<N+1)
        solve(i+1,j);
    if(j<N+1)
        solve(i,j+1);
}
int main(){
    scanf("%d",&N);
    solve(0,0);
    printf("%d\n",res);
    return 0;
}