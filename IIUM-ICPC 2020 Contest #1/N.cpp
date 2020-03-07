#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isEight(ll x){
    x = abs(x);

    while(x){
        if(x%10==8)
            return true;
        x = x/10LL;
    }
    
    return false;
}
int main(){
    ll a, b=0LL;

    scanf("%lld",&a);

    if(isEight(a)){ b++; }

    
    for(ll i = isEight(a) ? a+1 : a ; i<=8888888888LL;++i){
        if(!isEight(i))
            b++;
        else break;
        
    }
    printf("%lld\n",b);

    return 0;
}