# https://codeforces.com/problemset/problem/158/A

participants = input().split()
scores = [int(score) for score in input().split()]
kth_score = scores[int(participants[1]) - 1]
total = 0

for i in range(0, len(scores)):
    if scores[i] == 0 or scores[i] < kth_score:
        break
    
    total += 1

print(total)