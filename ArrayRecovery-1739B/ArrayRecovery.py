# https://codeforces.com/problemset/problem/1739/B

for s in[*open(0)][2::2]:
  r=[];t=f=0
  for x in map(int,s.split()):f|=0<x<=t;t+=x;r+=t,
    print(*(r,[-1])[f])
