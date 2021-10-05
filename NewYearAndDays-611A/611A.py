#https://codeforces.com/contest/611/problem/A



ins = input().split()
dict = {'week': [0, 52, 52, 52, 52, 53, 53, 52], 'month': 30 * [12] + [11, 7]}
print(dict[ins[2]][int(ins[0])])
