// Problem Link:   https://codeforces.com/contest/1365/problem/C



#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<pair<ll, ll>> a, b;

    for (ll i = 1; i <= n; i++)
    {
        ll j;
        cin >> j;

        a.push_back(make_pair(j, i));
    }

    for (ll i = 1; i <= n; i++)
    {
        ll j;
        cin >> j;

        b.push_back(make_pair(j, i));
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    
    vector<ll> diff;

    for (ll i = 0; i < n; i++)
    {
        ll p = (a[i].second - b[i].second);
        if (p < 0)
        {
            p += n;
        }

        diff.push_back(p);
    }

  

    unordered_map<ll, ll> mp;

    for (ll i = 0; i < n; i++)
    {
        mp[diff[i]]++;
    }

    ll maxe = LONG_LONG_MIN;
    for (auto it : mp)
    {
        maxe = max(it.second, maxe);
       
    }
    
    if (maxe == n - 1)
    {
        maxe++;
    }
    cout << maxe << endl;

    return 0;
}