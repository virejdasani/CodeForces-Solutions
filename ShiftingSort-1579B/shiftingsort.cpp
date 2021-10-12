// https://codeforces.com/contest/1579/problem/B

// B. Shifting Sort

//Contributed by Hitesh

#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

struct trip
{
  ll x, y, z;
};
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll a[n];
    ll b[n];
    for (ll &x : a)
      cin >> x;
    for (ll i = 0; i < n; i++)
      b[i] = a[i];
    sort(b, b + n);

    vector<trip> myv;
    deque<ll> q;
    ll k = 0;
    for (ll i = 0; i < n; i++)
    {
      if (a[i] == b[i])
        continue;
      else
      {
        ll d = 0;
        ll mn = min_element(a + i, a + n) - a;
        for (ll j = i; j <= mn; j++)
          q.push_back(a[j]);
        while (q.front() != b[i])
        {
          d++;
          ll u = q.front();
          q.pop_front();
          q.push_back(u);
        }
        for (ll j = i; j <= mn; j++)
        {
          a[j] = q.front();
          q.pop_front();
        }
        myv.push_back({i + 1, mn + 1, d});
        q.clear();
        k++;
      }

      ll f = 0;
      for (ll i = 0; i < n; i++)
      {
        if (a[i] != b[i])
          f = 1;
      }
      if (f == 0)
        break;
    }
    cout << k << "\n";
    for (auto i = 0; i < k; i++)
    {
      cout << myv[i].x << " " << myv[i].y << " " << myv[i].z << "\n";
    }
  }
}