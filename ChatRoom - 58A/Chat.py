#https://codeforces.com/problemset/problem/58/A



s = input()

j = 0
if s[0] == "h":
  j += 1

l_flag = True
for i in range(1, len(s)):
  if s[i] == s[i-1] and l_flag:
    continue

  if s[i] == "hello"[j]:
    if j == 4: 
      j += 1
      break
    j += 1
    if j == 3: l_flag = False
    else: l_flag = True
    continue

if j == 5: 
  print("YES")
else: 
  print("NO")
