#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
using namespace std;

int n, arr[100005];
map<int, long long> sum;
long long dp[100005][2];

long long solve(int i, int isLastTaken) {
	if(i == 0) return 0;
	if(dp[i][isLastTaken] != -1)
		return dp[i][isLastTaken];
	dp[i][isLastTaken] = solve(i-1, 0);
	if(isLastTaken == 0)
		dp[i][isLastTaken] = max(dp[i][isLastTaken], solve(i-1, 1) + sum[i]);
	return dp[i][isLastTaken];
}

int main(int argc, char** argv) {

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>n;
	for(int i = 0; i < n; ++i) {
		cin>>arr[i];
		sum[arr[i]] += arr[i];
	}
	memset(dp, -1, sizeof dp);
	cout<<solve(100000, 0)<<endl;
	return 0;
}