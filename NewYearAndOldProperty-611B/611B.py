#https://codeforces.com/problemset/problem/611/B



a, b = map(int, input().split())

candidate=0
limark_count = 0
for i in range(1, 64):
  ip = 2 ** i
  for j in range(i - 1):
    jp = 2 ** j
    candidate = ip - jp - 1
    if candidate >= a and candidate <= b:
      limark_count += 1

  if candidate >= b: break

print(limark_count)
