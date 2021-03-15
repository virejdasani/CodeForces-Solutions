n = int(input())
ad = input()

a = 0
d = 0

for i in range(n):
    # Check if the ith term is A. If yes, add 1 to the a counter
    if ad[i] == "A":
        a += 1
    # If it isnt A, it is D. So add 1 to the d counter
    else:
        d += 1

# Check if who had more wins or if it was a draw
if a > d:
    print("Anton")
elif d > a:
    print("Danik")
else:
    print("Friendship")
