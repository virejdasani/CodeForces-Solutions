"""
https://codeforces.com/problemset/problem/200/B

"""





n = int(input())
s = list(map(int,input().split()))
 
s1 =0
##n = len(s)
for i in range(n):
   if s[i] != 0:
      s1 = s1 + 1/(100/s[i])
 
print(s1/n*100)
 
   
   
  
