https://codeforces.com/contest/1343/problem/C

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	
	
	auto sgn = [&](int x) {
		if (x > 0) return 1;
		else return -1;
	};

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		long long sum = 0;
		for (int i = 0; i < n; ++i) {
			int cur = a[i];
			int j = i;
			while (j < n && sgn(a[i]) == sgn(a[j])) {
				cur = max(cur, a[j]);
				++j;
			}
			sum += cur;
			i = j - 1;
		}
		cout << sum << endl;
	}
	
	return 0;
}
