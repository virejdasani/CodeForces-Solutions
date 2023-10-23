// https://codeforces.com/contest/1887/problem/F
#include <bits/stdc++.h>

using i64 = long long;

// std::mt19937 rng;
// int ok = 0;
void solve() {
    // int n = rng() % 10 + 1;
    int n;
    std::cin >> n;
    
    // std::vector<int> A(n + 1);
    // std::set<int> S;
    // for (int i = 1; i <= n; i++) {
    //     A[i] = rng() % i + 1;
    //     S.insert(A[i]);
    // }
    
    std::vector<int> r(n + 2);
    for (int i = 1; i <= n; i++) {
        std::cin >> r[i];
    }
    // for (int i = 1; i <= n; i++) {
    //     int j = i - 1;
    //     std::set<int> T;
    //     while (j <= n && T.size() < S.size()) {
    //         j++;
    //         if (j <= n) {
    //             T.insert(A[j]);
    //         }
    //     }
    //     r[i] = j;
    //     // std::cin >> r[i];
    // }
    r[n + 1] = n + 1;
    if (r[1] > n) {
        std::cout << "No\n";
        return;
    }
    
    if (!std::is_sorted(r.begin(), r.end())) {
        std::cout << "No\n";
        return;
    }
    
    std::vector<int> L(n + 2, -1), R(n + 2, -1);
    for (int i = 0; i <= n; i++) {
        if (r[i] < r[i + 1]) {
            R[i] = r[i + 1];
            L[r[i + 1]] = i;
        }
    }
    
    std::vector<int> pl, pr;
    for (int i = 1; i <= n; i++) {
        if (R[i] == -1) {
            pl.push_back(i);
        }
        if (L[i] == -1) {
            pr.push_back(i);
        }
    }
    
    int k = pl.size();
    assert(pr.size() == k);
    int res = 0;
    for (int i = 0, j = 0; i < k; i++) {
        while (j < k && pl[i] >= pr[j]) {
            j++;
        }
        res = std::max(res, j - i);
    }
    for (int i = 0; i < k; i++) {
        R[pl[i]] = i + res < k ? pr[i + res] : n + 1;
        L[pr[i]] = i - res >= 0 ? pl[i - res] : 0;
    }
    
    std::vector<int> a(n + 1);
    int tot = 0;
    for (int i = 1; i <= n; i++) {
        a[i] = L[i] == 0 ? ++tot : a[L[i]];
    }
    
    std::vector<int> f(n + 2);
    for (int i = 1; i <= n; i++) {
        f[i] = std::max(f[i], R[i]);
        f[L[i]] = std::max(f[L[i]], i);
    }
    for (int i = 1; i <= n + 1; i++) {
        f[i] = std::max(f[i], f[i - 1]);
    }
    
    for (int i = 1; i <= n; i++) {
        if (r[i] < f[i - 1]) {
            std::cout << "No\n";
            return;
        }
    }
    
    std::cout << "Yes\n";
    for (int i = 1; i <= n; i++) {
        std::cout << a[i] << " \n"[i == n];
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

