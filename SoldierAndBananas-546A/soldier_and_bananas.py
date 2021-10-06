# https://codeforces.com/problemset/problem/546/A

case = [int(num) for num in input().split()]

cost = case[2] * case[0] * (case[2] + 1) / 2

if cost > case[1]:
    print(int(cost - case[1]))
else:
    print(0)