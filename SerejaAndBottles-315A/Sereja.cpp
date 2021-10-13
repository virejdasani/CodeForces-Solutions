// https://codeforces.com/problemset/problem/315/A
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
#define case_print(CASE, ans) cout << "Case #" << CASE << ": " << ans << endl
#define PI 3.1415926535897932384626
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define sv(a) sort(a.begin(), a.end(), greater<int>())
#define sortD(a) sort(a, a + n, greater<int>())
#define sortA(a) sort(a, a + n)
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> matrix;
typedef unordered_map<int, int> umpii;
typedef priority_queue<int> maxpqi;
typedef priority_queue<int, vi, greater<int>> minpqi;
int modExpo(int, int, int);
bool isPower(int, int);
bool isPrime(int);
//=======================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;

void solve_main(int CASE)
{
    int n;
    cin >> n;
    vpii arr(n);
    fo(i, n) cin >> arr[i].first >> arr[i].second;
    int ans = 0;
    unordered_set<int> vis;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (arr[j].first == arr[i].second && vis.find(j) == vis.end())
            {
                ans++;
                vis.insert(j);
            }
        }
    }
    ans = n - ans;
    cout << ans << endl;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int CASE = 1;
    // cin >> CASE;
    for (int i = 1; i <= CASE; i++)
    {
        solve_main(i);
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
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}