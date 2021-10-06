# https://codeforces.com/problemset/problem/467/A

n = int(input())
count_accomodations = 0

for i in range(n):
    accomodation = [int(num) for num in input().split()]
    if (accomodation[1] - accomodation[0] >= 2):
        count_accomodations += 1

print(count_accomodations)