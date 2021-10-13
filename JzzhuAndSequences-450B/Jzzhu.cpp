// https://codeforces.com/problemset/problem/450/B
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define gc getchar_unlocked
#define double long double
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define pb(x) push_back(x)
#define PI 3.1415926535897932384626

//=======================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;

//=======================

//=======================

void solve_main()
{
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), std::cout.tie(0);

    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    int arr[] = {0, (x % MOD), (y % MOD), ((y % MOD) - (x % MOD)) % MOD, (-x) % MOD, (-y) % MOD, ((x % MOD) - (y % MOD)) % MOD};
    n = (n + 6) % 6;
    int ans;
    if (n == 0)
        ans = (arr[6] + MOD) % MOD;
    else
        ans = (arr[n] + MOD) % MOD;
    std::cout << ans << endl;
    return 0;
}

