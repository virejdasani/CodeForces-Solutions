//https://codeforces.com/contest/1490/problem/C


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ld t;
    cin >> t;

    while (t--)
    {
        ld x;
        cin >> x;

        ld p = cbrt(x);
        bool flag = 0;

        for (ld i = 1; i < p; i++)
        {
            ll m = i * i * i;
            ll h = x - m;
            ll b = cbrt(h);
          
            if (h + m == x and b*b*b + i*i*i == x)
            {
               
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
