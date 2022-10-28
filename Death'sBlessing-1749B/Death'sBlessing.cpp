//https://codeforces.com/contest/1749/problem/B

#include <bits/stdc++.h> 

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }
    
    auto ans = std::accumulate(a.begin(), a.end(), 0LL) + std::accumulate(b.begin(), b.end(), 0LL);
    ans -= *std::max_element(b.begin(), b.end());
    
    std::cout << ans << "\n";
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
