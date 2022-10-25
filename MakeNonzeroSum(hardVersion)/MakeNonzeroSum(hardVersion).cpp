//https://codeforces.com/contest/1753/problem/A2

#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    
    std::vector<int> p;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (a[i]) {
            p.push_back(i);
        }
    }
    
    if (p.size() & 1) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::vector<std::array<int, 2>> ans;
    int last = -1;
    
    for (int i = 0; i < int(p.size()); i += 2) {
        int x = p[i], y = p[i + 1];
        if ((y - x) % 2 == (a[x] == a[y])) {
            ans.push_back({last + 1, y});
        } else {
            if ((x - last) % 2 == 0) {
                a[x] *= -1;
            }
            if (a[x] != a[y]) {
                ans.push_back({last + 1, y - 1});
                ans.push_back({y, y});
            } else if (y - x > 1) {
                ans.push_back({last + 1, y - 2});
                ans.push_back({y - 1, y});
            } else if (x - last > 1) {
                ans.push_back({last + 1, last + 1});
                ans.push_back({last + 2, y - 1});
                ans.push_back({y, y});
            } else {
                assert(false);
            }
        }
        last = y;
    }
    if (last < n - 1) {
        ans.push_back({last + 1, n - 1});
    }
    
    std::cout << ans.size() << "\n";
    for (auto [x, y] : ans) {
        std::cout << x + 1 << " " << y + 1 << "\n";
    }
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
