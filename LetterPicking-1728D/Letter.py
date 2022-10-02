#https://codeforces.com/contest/1728/problem/D

import sys
input = sys.stdin.readline
t = int(input())
for _ in range(t):
    s = input()[:-1]
    n = len(s)
    l, r = 0, n - 1
    while l < r:
        if s[l] == s[r]:
            l += 1
            r -= 1
        else:
            break
    s = s[l:r + 1]
    res = 'Draw'
    for i in range(1, len(s), 2):
        if s[i] != s[i - 1]:
            res = "Alice"
            break
    print(res)