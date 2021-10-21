// https://codeforces.com/problemset/problem/1579/B


#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define   pb              push_back
#define   rep(i,a,b)      for(int i=a;i<b;i++)
#define   vl              vector<ll>
#define   vi              vector<int>
#define   lb              lower_bound
#define   ub              upper_bound
#define   print(ans)      printf("%.9f\n",ans)
#define all(x) (x).begin(), (x).end()
typedef int64_t ll;
typedef unsigned long long ull;
typedef long double lld;
#define   pi              pair<ll, int>
#define nline "\n"
int rotate(vector<int>&v)
{
	int mi = INT_MAX;
	int idx = 1;
	int n = v.size();
	rep(i, 1, n)
	{
		if (v[i] < mi)
		{
			mi = v[i];
			idx = i;
		}
	}
	vector<int>temp;
	temp.pb(0);
	rep(i, idx + 1, n)
	{
		temp.pb(v[i]);
	}
	rep(i, 1, idx)
	{
		temp.pb(v[i]);
	}
	v = temp;
	return idx;

}
void solve()
{
	int n;
	cin >> n;
	vector<int>v;
	v.pb(0);
	rep(i, 0, n)
	{
		int a;
		cin >> a;
		v.pb(a);
	}
	vector<pair<pair<int, int>, int>>ans;
	rep(i, 1, n + 1)
	{
		int d = rotate(v);
		d--;
		if (d != 0)
		{
			ans.pb({{i, n}, d});
		}
	}
	cout << ans.size() << nline;
	for (auto it : ans)
	{
		cout << it.first.first << " " << it.first.second << " " << it.second << nline;
	}


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	freopen("output.out", "w", stdout);
	freopen("Error.out", "w", stderr);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
