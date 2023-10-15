// https://codeforces.com/contest/1886/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    for (int test_case = 1; test_case <= t; test_case++)
    {
        int n;
        cin >> n;
        if (n % 3 == 0 || n == 7 || n == 8)
        {
            if (n >= 10 || n == 7)
            {
                cout << "YES\n" << 1 << " " << 4 << " " << n - 5 << "\n"; 
            }
            else if (n == 8) cout << "YES\n" << 2 << " " << 5 << " " << 1 << "\n";
            else cout << "NO\n";
        }
        else if (n < 10)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n" << n - 3 << " " << 1 << " " << 2 << "\n";
        }
        
    }
    return 0;
}