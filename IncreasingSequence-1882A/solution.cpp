//https://codeforces.com/contest/1882/submission/225108305

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        int b[n];
        int ind = 1;
        if (n == 1) 
        {
            int ans = (a[0] == 1)?2:1;
            cout << ans << "\n";
            continue;
        }
        if (a[0] == 1)
        {
            b[0] = 2;
            ind = 3;
        }
        else 
        {
            b[0] = 1;
            ind = 2;
        }
        for (i = 1; i < n; i++)
        {
            if (a[i] == ind)
            {
                b[i] = ++ind;
                ind++;
            }
            else
            {
                b[i] = ind++;
            }
        }
        cout << b[n - 1] << "\n";
    }
    return 0;
}