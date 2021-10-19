// https://codeforces.com/problemset/problem/645/E
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <unordered_map>
#include <assert.h>
#include <array>
#include <random>
#include <chrono>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pair<int, int>> piii;
typedef vector<int> vi;
typedef vector<pii> vii;

int dadsadasda;

#define ri(a) dadsadasda=scanf("%d", &a)
#define rii(a,b) dadsadasda=scanf("%d %d", &a, &b)
#define riii(a,b,c) dadsadasda=scanf("%d %d %d", &a, &b, &c)
#define rl(a) dadsadasda=scanf("%lld", &a)
#define rll(a,b) dadsadasda=scanf("%lld %lld", &a, &b)
#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ALL(s) s.begin(),s.end()
#define SZ(s) (int)s.size()

const int INF = 0x3f3f3f3f;
const ll LLINF = 1e18;
const int MAXN = 1e5; // CAMBIAR ESTE
const int MOD = 1e9 + 7;
//mt19937 rng(chrono::system_clock::now().time_since_epoch().count());

// GJNM
int N, K;
string S;

ll SUM, DP[69];
int LST[59];

void f(int i) {
    SUM = (SUM - DP[i] + MOD) % MOD;
    DP[i] = (SUM + DP[i] + 1) % MOD;
    SUM = (SUM + DP[i]) % MOD;
}
int get_fst() {
    int mni = 0;
    FOR(i, 0, K) if (LST[i] < LST[mni])
        mni = i;
    return mni;
}

int main() {
    rii(N, K);
    cin >> S;
    FOR(i, 0, SZ(S)) {
        int c = S[i] - 'a';
        f(c);
        LST[c] = i + 1;
    }
    FOR(_, 0, N) {
        int i = get_fst();
        f(i);
        LST[i] = _ + SZ(S) + 1;
    }
    printf("%lld\n", (SUM + 1) % MOD);

    return 0;
}
