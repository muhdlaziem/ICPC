#include <bits/stdc++.h>
#define ll long long 
using namespace std;


const int mod = 1000 * 1000 * 1000 +7;
int n,k;
int dp[100005];
int solve(int i){
    if(i == 0) return 1;
    if(dp[i] != -1) return dp[i];
    dp[i] = solve(i-1);
    if(i>=k){
        dp[i] += solve(i-k);
        dp[i] %= mod;
    }
    return dp[i];
}
int main(int argc, const char** argv) {
        memset(dp,-1,sizeof dp);
        for(int i=1 ; i<=100000; ++i)
            dp[i]= solve(i);

        for(int i =1 ; i<=100000; ++i)
            dp[i] +=dp[i-1];
        
        for(int i = 0; i< n ; ++i){
            int l, r;
            cin >> l >> r;

            cout << (dp[r] - dp[l-1])
        }
        
        
    return 0;

}