// MIXTURES - Mixtures
// #dynamic-programming

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll LL_INF = 0x3f3f3f3f3f3f3f;

int n;
int num[111];
long long dp[111][111];

int getRangeSum(int i, int j){
    return (num[j] - (i>0 ? num[i-1] : 0) + 100) %100;
}
ll selesai (int i, int j){
    if(i==j) return 0;

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    dp[i][j] = LL_INF;
    for(int k = i ; k < j ; ++k){
        dp[i][j] = min(dp[i][j], selesai(i, k)+ selesai(k+1, j) +getRangeSum(i,k)*getRangeSum(k+1, j));

    }
    return dp[i][j];
}
int main(){

    while(scanf("%d", &n) != EOF){

        for(int i = 0; i < n; ++i){
            scanf("%d",&num[i]);
        }

        for(int i = 0 ; i < n ; ++i){
            num[i] += num[i-1];
            num[i] %= 100;
        }

        memset(dp, -1, sizeof dp);
        printf("%lld\n", selesai(0, n-1));
    }


    return 0;
}