#https://codeforces.com/problemset/problem/271/A
year=int(input())
def check(year):
    lst=[int(x) for x in str(year)]
    count=0
    for i in range (0,3):
        for j in range(i+1,4):
            if lst[i]==lst[j]:
                count+=1
    if count!=0:
        year+=1
        check(year)
    else:
        print(year)

check(year+1)
