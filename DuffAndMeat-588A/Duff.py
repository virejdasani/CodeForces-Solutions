#https://codeforces.com/problemset/problem/588/A




n = int(input())

a, p = map(int, input().split(" "))
mm = a * p # minimum money
mp = p # minimum price
for i in range(n - 1):
  a, p = map(int, input().split(" "))
  if p < mp:
    mp = p
  mm += a * mp

print(mm)
