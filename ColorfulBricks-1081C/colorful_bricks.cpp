// https://codeforces.com/problemset/problem/1081/C

#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
const ll MOD = 998244353;
 
ll dp[2010][2010];
 
int main()
{
	int n, m, k;
  cin >> n >> m >> k;
	dp[1][0] = m;
	for(int i = 2; i <= n; ++i) {
		for(int j = 0; j <= k; ++j) {
      dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
      if(j > 0) {
        dp[i][j] = (dp[i][j] + (dp[i-1][j-1] * (m-1)) % MOD) % MOD;
      }
    }
  }
	cout << dp[n][k] << '\n';
}
