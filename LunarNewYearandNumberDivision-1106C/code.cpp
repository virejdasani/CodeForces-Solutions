//https://codeforces.com/contest/1106/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    ll i = 0, j = n - 1, sum = 0;

    while (i < j)
    {
        sum += (a[i] + a[j]) * (a[i] + a[j]);
        i++;
        j--;
    }

    cout << sum << endl;

    return 0;
}
