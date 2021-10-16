// https://codeforces.com/problemset/problem/322/B
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
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define toUpper(su) transform(su.begin(), su.end(), su.begin(), ::toupper)
#define toLower(sl) transform(sl.begin(), sl.end(), sl.begin(), ::tolower)
#define ump unordered_map
#define uns unordered_set
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define pb(x) push_back(x)
#define mid(l, r) (l + (r - l) / 2)
#define bitc(n) __builtin_popcount(n)
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
typedef priority_queue<int> maxpq;
typedef priority_queue<int, vi, greater<int>> minpq;

//=======================
const int MOD = 1000000007;
const int N = 2e6 + 13, M = N;

void solve_main(int CASE)
{
    int r, g, b;
    cin >> r >> g >> b;
    int mx = max3(r, g, b);
    int ans = 0;
    if (r > 3)
    {
        if (r % 3 != 0)
        {
            ans += (r / 3);
            r -= ans * 3;
        }
        else
        {
            ans += (r / 3);
            ans--;
            r -= ans * 3;
        }
    }
    if (g > 3)
    {
        if (g % 3 != 0)
        {
            int t = (g / 3);
            g -= 3 * t;
            ans += t;
        }
        else
        {
            int t = (g / 3);
            t--;
            g -= 3 * t;
            ans += t;
        }
    }
    if (b > 3)
    {
        if (b % 3 != 0)
        {
            int t = (b / 3);
            b -= 3 * t;
            ans += t;
        }
        else
        {
            int t = (b / 3);
            t--;
            b -= 3 * t;
            ans += t;
        }
    }
    // deb2(r, g);
    // deb2(ans, b);
    int op1 = 0;
    int op2 = 0;
    int t = min3(r, g, b);
    op1 += t;
    r -= t;
    g -= t;
    b -= t;
    op1 += r / 3;
    op1 += b / 3;
    op1 += g / 3;
    r += t;
    g += t;
    b += t;
    op2 += r / 3;
    op2 += b / 3;
    op2 += g / 3;
    ans += max(op1, op2);
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