#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main () {
	ll n, s, p, k, m, t, x, y, z, ans, res;

	cin >> n;

	res = 0;
	while ( n ) {
		m = n;
		ans = 0;
		while ( m ) {
			ans = max ( ans, m % 10 ) ;

			m /= 10;
		}

		res ++;
		n -= ans;
	}

	cout << res << endl;



	return 0;
}