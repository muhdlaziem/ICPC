// 10739 - String to Palindrome
#include <bits/stdc++.h>
#define endl "\n"
typedef long long ll;
const int mod = 1000 * 1000 * 1000 + 7; 

using namespace std;

int T, dp[1010][1010];
string s;

int solve(int i, int j) {
	if(i >= j) 
		return 0;
	if(dp[i][j] != -1)
	 return dp[i][j];
	dp[i][j] = min(solve(i + 1, j), solve(i, j - 1)) + 1;
	dp[i][j] = min(dp[i][j], solve(i + 1, j - 1) + (s[i] != s[j]));
	return dp[i][j];
}

int main(int argc, char** argv) {

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin>>T;
	cin.ignore();
	for(int C = 1; C <=T; ++C) {
		memset(dp, -1, sizeof dp);
		getline(cin, s);
		printf("Case %d: %d\n", C, solve(0, s.size()-1));
	}

	return 0;
}