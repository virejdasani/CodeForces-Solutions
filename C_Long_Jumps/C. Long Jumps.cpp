// https://codeforces.com/contest/1472/problem/C


#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }

  vector<int> dp(n);
  for (int i = n - 1; i >= 0; i--) {
    dp[i] = a[i];
    int j = i + a[i];
    if (j < n) {
      dp[i] += dp[j];
    }
  }
  cout << *max_element(dp.begin(), dp.end()) << endl;
}

int main() {
  int tests;
  cin >> tests;
  while (tests-- > 0) {
    solve();
  }
  return 0;
}
