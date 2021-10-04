# https://codeforces.com/problemset/problem/59/A
s = str(input())
d={"UPPER_CASE":0, "LOWER_CASE":0}
for c in s:
    if c.isupper():
       d["UPPER_CASE"]+=1
    elif c.islower():
       d["LOWER_CASE"]+=1
    else:
       pass

l=len(s)

if(d["UPPER_CASE"]>l/2):
    print(s.upper())
else:
    print(s.lower())

