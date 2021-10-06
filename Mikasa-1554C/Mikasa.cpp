// https://codeforces.com/contest/1554/problem/C






#include<bits/stdc++.h>
using namespace std;
#define   pb              push_back


void changeToBinary(int n, vector<int>&ans)
{
	stack<int>s;
	while (n > 0)
	{
		int r = n % 2;
		s.push(r);
		n = n / 2;
	}
	int k = 31 - s.size() + 1;
	while (!s.empty())
	{
		int a = s.top();
		s.pop();
		ans[k] = a;
		k++;
	}

}
int changeToDecimal(vector<int>v)
{
	int ans = 0;
	int j = 0;
	for (int i = 31; i > 0; i--)
	{
		ans = ans + v[i] * (1 << j);
		j++;
	}
	return ans;
}
void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int>bn(32, 0);
	vector<int>bm(32, 0);
	changeToBinary(n, bn);
	changeToBinary(m + 1, bm);
	vector<int>ans(32, 0);
	for (int i = 1; i < 32; i++)
	{
		if (bn[i] == 0 && bm[i] == 0)
		{
			ans[i] == 0;
		}
		if (bn[i] == 1 && bm[i] == 0)
		{
			ans[i] = 0;
			break;
		}
		if (bn[i] == 0 && bm[i] == 1)
		{
			ans[i] = 1;
		}
		if (bn[i] == 1 && bm[i] == 1)
		{
			ans[i] = 0;
		}

	}
	cout << changeToDecimal(ans) << endl;


}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
