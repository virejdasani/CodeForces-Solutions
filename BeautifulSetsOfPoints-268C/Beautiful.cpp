// https://codeforces.com/problemset/problem/268/C
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
    int n, m;
    cin >> n >> m;
    int ans = min(m, n) + 1;
    cout << ans << endl;
    int x = 0, y = ans - 1;
    while (x < ans)
    {
        cout << x << " " << y << endl;
        x++;
        y--;
    }
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