#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll l,r;
    scanf("%lld%lld",&l,&r);

    ll range = r - (l-1);
    // printf("%lld\n",range);
    if(range<3LL || (l%2LL!=0LL && range==3LL)){
        printf("-1\n");
    }
    else{
        if(l%2LL==0LL){
            printf("%lld %lld %lld\n",l,l+1LL,l+2LL);
        }
        else{
            printf("%lld %lld %lld\n",l+1LL,l+2LL,l+3LL);
        }
    }
    return 0;
}