// https://codeforces.com/contest/1887/problem/E
#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n;
    std::cin >> n;
    
    std::vector<std::vector<std::pair<int, int>>> adj(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        int x, y;
        std::cin >> x >> y;
        x--, y--;
        y += n;
        adj[x].emplace_back(y, i);
        adj[y].emplace_back(x, i);
    }
    
    std::vector<bool> vis(2 * n);
    std::vector<int> par(2 * n), dep(2 * n), parc(2 * n);
    std::vector<int> cyc;
    std::vector<int> col;
    auto dfs = [&](auto self, int x) -> void {
        vis[x] = true;
        for (auto [y, c] : adj[x]) {
            if (!vis[y]) {
                par[y] = x;
                parc[y] = c;
                dep[y] = dep[x] + 1;
                self(self, y);
            } else if (dep[y] > dep[x] && cyc.empty()) {
                for (int i = y; i != x; i = par[i]) {
                    cyc.push_back(i);
                    col.push_back(parc[i]);
                }
                cyc.push_back(x);
                col.push_back(c);
            }
        }
    };
    for (int i = 0; i < 2 * n; i++) {
        if (!vis[i] && cyc.empty()) {
            dfs(dfs, i);
        }
    }
    
    assert(!cyc.empty());
    
    if (cyc[0] >= n) {
        std::rotate(cyc.begin(), cyc.begin() + 1, cyc.end());
        std::rotate(col.begin(), col.begin() + 1, col.end());
    }
    
    while (cyc.size() > 4) {
        int m = (cyc.size() + 3) / 4 * 2;
        std::cout << "? " << cyc[0] + 1 << " " << cyc[m - 1] - n + 1 << std::endl;
        
        int res;
        std::cin >> res;
        res--;
        
        if (std::find(col.begin(), col.begin() + m - 1, res) == col.begin() + m - 1) {
            cyc.erase(cyc.begin() + m, cyc.end());
            col.erase(col.begin() + m, col.end());
            col.back() = res;
        } else {
            cyc.erase(cyc.begin() + 1, cyc.begin() + m - 1);
            col.erase(col.begin() + 1, col.begin() + m - 1);
            col[0] = res;
        }
    }
    
    std::cout << "! " << cyc[0] + 1 << " " << cyc[2] + 1 << " " << cyc[1] - n + 1 << " " << cyc[3] - n + 1 << std::endl;
    
    std::string s;
    std::cin >> s;
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
