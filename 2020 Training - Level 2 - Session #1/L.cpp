#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll L;
set<ll> res;
void solve(ll Lucky){

    if(Lucky>L){return;}
    if(Lucky!= 0LL)
        res.insert(Lucky);
    
    solve(Lucky*10LL+4LL);
    solve(Lucky*10LL+7LL);

    
}
int main(){
    cin >> L;
    solve(0LL);
    cout<<res.size()<<endl;
    return 0;
}