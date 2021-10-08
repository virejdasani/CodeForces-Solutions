//https://codeforces.com/contest/519/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    if (n <= 1 and m <= 1)
    {
        cout << 0 << endl;
        return 0;
    }

    if (n < 1 or m < 1)
    {
        cout << 0 << endl;
        return 0;
    }

    else
    {
        ll count = 0;

        while (n != 0 and m != 0)
        {
            if (n > m)
            {
                n = n - 2;
                m = m - 1;
                count++;
            }

            else
            {
                m = m - 2;
                n = n - 1;
                count++;
            }

            if ((n <= 1 and m <= 1) or (n < 1 or m < 1))
            {
                cout << count << endl;
                return 0;
            }
        }

        cout << count << endl;
        return 0;
    }
}
