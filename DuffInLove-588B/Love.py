#https://codeforces.com/contest/588/problem/B



n=int(input())
for i in range(2, 10**6):
	while n%(i*i)==0:
		n//= i
print(n)
