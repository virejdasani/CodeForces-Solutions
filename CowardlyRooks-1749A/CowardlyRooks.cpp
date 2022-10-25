//https://codeforces.com/contest/1749/problem/A

#include <bits/stdc++.h> 

using i64 = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<int> cx(n), cy(n);
    std::vector<int> x(m), y(m);
    int nx = 0, ny = 0;
    for (int i = 0; i < m; i++) {
        std::cin >> x[i] >> y[i];
        x[i]--, y[i]--;
        nx += !cx[x[i]]++;
        ny += !cy[y[i]]++;
    }
    
    if (nx == m && ny == m && n == m) {
        std::cout << "NO\n";
        return;
    }
    
    for (int i = 0; i < m; i++) {
        if (nx - (cx[x[i]] == 1) == m - 1 && ny - (cy[y[i]] == 1) == m - 1) {
            std::cout << "YES\n";
            return;
        }
    }
    std::cout << "NO\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int t;
    std::cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
