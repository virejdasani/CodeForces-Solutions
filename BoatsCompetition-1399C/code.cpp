// https://codeforces.com/contest/1399/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> w;
        for (ll i = 0; i < n; i++)
        {
            ll g;
            cin >> g;
            w.push_back(g);
        }

        sort(w.begin(), w.end());
        ll ans = 0;
        for (ll i = 2 * w[0]; i <= 2 * w[n - 1]; i++)
        {
            ll j = n - 1, k = 0, c = 0;
            while (k < j)
            {
                if (w[k] + w[j] == i)
                {
                    c++;
                    k++;
                    j--;
                }

                else if (w[k] + w[j] < i)
                {
                    k++;
                }

                else
                {
                    j--;
                }
            }

            ans = max(ans, c);
        }

        cout << ans << endl;
    }
    return 0;
}
