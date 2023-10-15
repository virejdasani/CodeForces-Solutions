// https://codeforces.com/contest/1881/problem/B

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

template<class T> bool ckmax(T &u, T v) { return u < v ? (u = v, 1) : 0; }
template<class T> bool ckmin(T &u, T v) { return u > v ? (u = v, 1) : 0; }

bool solve() {
    int a, b, c; cin >> a >> b >> c;
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    if (b % a != 0 || c % a != 0 || (b / a - 1 + c / a - 1) > 3) return false;
    return true;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int tt; cin >> tt; while (tt--) cout << (solve() ? "YES\n" : "NO\n");
}