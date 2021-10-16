// https://codeforces.com/problemset/problem/279/B
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
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
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> matrix;
typedef unordered_map<int, int> umpii;
typedef priority_queue<int> maxpqi;
typedef priority_queue<int, vi, greater<int>> minpqi;
int modExpo(int, int, int);
bool isPower(int, int);
//=======================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;

//=======================
//=======================

void solve_main()
{
    int n, t;
    cin >> n >> t;
    vi arr(n);
    fo(i, n) cin >> arr[i];
    int start = 0;
    int end = 0;
    int max_so_far = 0;
    int curr_max = 0;
    int ti = 0;
    while (end < n)
    {
        // deb2(start, end);
        // deb2(max_so_far, curr_max);
        if (arr[end] + ti <= t)
        {
            ti += arr[end];
            curr_max++;
            end++;
        }
        else
        {
            max_so_far = max(max_so_far, curr_max);
            ti -= arr[start];
            curr_max--;
            start++;
        }
        max_so_far = max(max_so_far, curr_max);
    }
    cout << max_so_far << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int CASE = 1;
    // cin >> CASE;
    while (CASE--)
    {
        solve_main();
    }

    return 0;
}

int modExpo(int a, int b, int m)
{
    int res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a % m) % m;
        a = ((a % m) * (a % m)) % m;
        b = b >> 1;
    }
    return res;
}

bool isPower(int m, int n)
{
    if (m == 1)
        return n == 1;
    int p = 1;
    while (p < n)
    {
        p *= m;
    }
    return p == n;
}