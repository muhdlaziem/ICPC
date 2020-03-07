#include <bits/stdc++.h>
using namespace std;

const int mod = 1000 * 1000 * 1000 +7;

int n , k, d;
int dp[101][2];

int solve(int curW, int taken){

    if(curW == n) return taken;
    if(dp[curW][taken] != -1) return dp[curW][taken];
    
    dp[curW][taken] = 0;
    
    for(int i = 1; i<= k ; ++i){
        if(curW + i <= n )
            dp[curW][taken] += solve(curW + i, taken || (i>= d));
            dp[curW][taken] %= mod;
    }
    return dp[curW][taken];
}

int main(int argc, const char** argv) {

    cin >> n >> k >> d;
    memset(dp, -1 , sizeof dp);
    cout << solve(0,0)<< endl;
    return 0;
}