#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;

int T;
int n,m;

pair<int, int>  arr[1010];
int dp[1010][33];
int solve(int i, int rem){
    if(i == n) return 0;

    if(dp[i][rem] != -1) return dp[i][rem];

    dp[i][rem] = solve(i +1, rem);

    if(rem >= arr[i].S){
        dp[i][rem] = max(dp[i][rem], solve(i+1, rem - arr[i].S) + arr[i].F);

    }
    return dp[i][rem];

}

int main(){
    scanf("%d",&T);

    while(T--){
        scanf("%d",&n);

        for(int i= 0 ; i< n ; ++i)
            scanf("%d%d", &arr[i].F, &arr[i].S);
        
        scanf("%d",&m);
        int w;
        int ans=0;
        memset(dp, -1 , sizeof dp);
        for(int i=0; i<m ;++i){
            scanf("%d",&w);
            ans += solve(0,w);
        }
        cout<<ans<<endl;
    }

    return 0;
}