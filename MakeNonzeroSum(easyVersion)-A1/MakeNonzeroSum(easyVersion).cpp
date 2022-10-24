//https://codeforces.com/contest/1753/problem/A1

#include <bits/stdc++.h>
 
using i64 = long long;
 
void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    
    if (n % 2) {
        std::cout << -1 << "\n";
        return;
    }
    
    std::vector<std::array<int, 2>> ans;
    for (int i = 0; i < n; i += 2) {
        if (a[i] == a[i + 1]) {
            ans.push_back({i, i + 1});
        } else {
            ans.push_back({i, i});
            ans.push_back({i + 1, i + 1});
        }
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
