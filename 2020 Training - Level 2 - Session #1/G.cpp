#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T;


ll findTrailingZeros(ll n) 
{ 
    // Initialize result 
    ll count = 0; 
  
    // Keep dividing n by powers of  
    // 5 and update count 
    for (ll i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
}
ll binarySearch(ll l, ll r) 
{ 
    while (l < r) { 
        ll m = (l+r) >> 1; 
        cout<< l << " "<<m<<" "<< r << endl;

        if (findTrailingZeros(m) >= T) 
            r = m;
  
        else
            l = m + 1;
    } 
  
    return l; 
} 
int main(){
    // while(true){
        cin >> T;
        cout<<binarySearch(0,5*T)<<endl;

    // }
    
   return 0;
}