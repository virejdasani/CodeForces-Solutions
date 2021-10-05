# https://codeforces.com/problemset/problem/1581/B


from sys import stdin,stdout

input=stdin.readline
 
def inp(): return map(int,input().split())
 
for _ in range(int(input())):
    n,m,k=inp()
    if k<=1:
        print("NO")
    elif k==2:
        if n==1 and m==0:
            print("YES")
        else:
            print("NO")
    elif k==3:
        if m==(n*(n-1))//2:
            print("YES")
        else:
            print("NO")
    else:
        if m>=(n-1) and m<=(n*(n-1))//2:
            print("YES")
        else:
            print("NO")