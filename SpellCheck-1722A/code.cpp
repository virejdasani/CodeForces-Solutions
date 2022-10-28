//https://codeforces.com/contest/1722/problem/A

#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
 
#ifndef  ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output.txt", "w", stdout);
#endif
 
	int t;
	cin >> t;
	while (t--)
	{
		string str = "Timru";
		int n;
		string s;
		cin >> n;
		cin >> s;
		sort(s.begin(), s.end());
		if (s == str)
			cout << "YES\n";
		else
			cout << "NO\n";
 
	}
}
