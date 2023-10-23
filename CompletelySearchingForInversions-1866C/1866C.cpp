// https://codeforces.com/contest/1866/problem/C

#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define oset tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;

#define dbg(x) {cerr << " LINE " << __LINE__ << " : " << #x << " : " << x << "\n";}
#define dbgLine {cerr << " LINE : " << __LINE__ << "\n";}
#define ld long double
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<pair<int, int>>
#define vvp vector<vector<pair<int, int>>>
#define vb vector<bool>
#define vvb vector<vector<bool>>
#define mii map<int, int>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define ff first
#define ss second
#define FOR(i,N) for(int i=0;i<(N);++i)
#define FORe(i,N) for(int i=1;i<=(N);++i)
#define FORr(i,a,b) for(int i=(a);i<=(b);++i)
#define FORrev(i,a,b) for(int i=(a);i>=(b);--i)
#define endl "\n"
#define all(c) (c).begin(), (c).end()
#define sz(c) (c).size()
#define int long long int

// const ll MOD = 1000000007;
const ll MOD = 998244353;

vi cnt0, cnt1, ans;

void dfs(int idx, vvp &adj)
{
    int cnt = 0;
    for(auto x : adj[idx])
    {
        int curcnt = 0;
        if(cnt0[x.ff] == -1)
        {
            cnt0[x.ff] = 0;
            cnt1[x.ff] = 0;
            dfs(x.ff, adj);
        }
        if(x.ss == 1) ans[idx] = (ans[idx] + cnt0[x.ff]) % MOD;
        cnt0[idx] = (cnt0[idx] + cnt0[x.ff]) % MOD;
        cnt1[idx] = (cnt1[idx] + cnt1[x.ff]) % MOD;
        if(x.ss == 1) cnt1[idx] = (cnt1[idx] + 1) % MOD;
        else cnt0[idx] = (cnt0[idx] + 1) % MOD;
        curcnt += cnt0[x.ff];
        if(x.ss == 0) curcnt = (curcnt + 1) % MOD;
        ans[idx] = (ans[idx] + curcnt * cnt % MOD + ans[x.ff]) % MOD;
        cnt = (cnt + cnt1[x.ff]) % MOD;
        if(x.ss == 1) cnt = (cnt + 1) % MOD;
    }
}

void solve()
{
    int n;
    cin>>n;
    cnt0.assign(n, -1);
    cnt1.assign(n, -1);
    ans.resize(n);
    vvp adj(n);
    FOR(i, n)
    {
        int x;
        cin>>x;
        FOR(j, x)
        {
            int l, w;
            cin>>l>>w;
            adj[i].pb({l - 1, w});
        }
    }
    cnt0[0] = cnt1[0] = 0;
    dfs(0, adj);
    cout<<ans[0];
}

signed main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); freopen("error.txt", "w", stderr);
    #endif
    int tc = 1;
    // cin >> tc;
    for (int loop = 1; loop <= tc; loop++) solve();
    // cerr << (double)clock()/CLOCKS_PER_SEC << " s" << endl;
    return 0;
}
