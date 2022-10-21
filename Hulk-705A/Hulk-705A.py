# https://codeforces.com/problemset/problem/705/A
### 705 A. Hulk

# Store input
n = int(input())

# Get the feeling
feeling = "I hate"
for i in range(2,n+1):
    if i%2==0:
        feeling += " that I love"
    else:
        feeling += " that I hate"
feeling += " it"

print(feeling)

# https://codeforces.com/problemset/problem/705/A


# Dr. Bruce Banner hates his enemies (like others don't).
# As we all know, he can barely talk when he turns into the
# incredible Hulk. That's why he asked you to help him to
# express his feelings.

# Hulk likes the Inception so much, and like that his feelings
# are complicated. They have n layers. The first layer is hate,
# second one is love, third one is hate and so on...

# For example if n = 1, then his feeling is "I hate it" or if
# n = 2 it's "I hate that I love it", and if n = 3 it's "I hate
# that I love that I hate it" and so on.

# Please help Dr. Banner.

# Input

# The only line of the input contains a single integer
# n (1 ≤ n ≤ 100) — the number of layers of love and hate.

# Output

# Print Dr.Banner's feeling in one line.

# Contraints
# time limit per test
# 1 seconds
# memory limit per test
# 256 megabytes
# input
# standard input
# output
# standard output

# Examples

# Input
# 1

# Output
# I hate it

# Input
# 2

# Output
# I hate that I love it

# Input
# 3

# Output
# I hate that I love that I hate it
