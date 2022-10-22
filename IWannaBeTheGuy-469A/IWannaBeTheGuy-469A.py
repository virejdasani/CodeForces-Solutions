# https://codeforces.com/problemset/problem/469/A
### 469 A. I Wanna Be the Guy

# Store the number of levels
n = int(input())

# Store the levels of Little X and Y
x = [int(i) for i in input().split()]
Nx = x.pop(0)
y = [int(i) for i in input().split()]
Ny = y.pop(0)

levels = x + y
levels.sort()

# Count the passed levels
count = Nx + Ny

for i in range(len(levels) - 1):
    if levels[i] == levels[i+1]:
        count -= 1 

if count == n:
    print("I become the guy.")
else:    
    print("Oh, my keyboard!")
    
# https://codeforces.com/problemset/problem/469/A


# There is a game called "I Wanna Be the Guy", consisting of n levels. 
# Little X and his friend Little Y are addicted to the game. Each of 
# them wants to pass the whole game.

# Little X can pass only p levels of the game. And Little Y can pass 
# only q levels of the game. You are given the indices of levels Little 
# X can pass and the indices of levels Little Y can pass. Will Little X 
# and Little Y pass the whole game, if they cooperate each other?

# Input

# The first line contains a single integer n (1 ≤  n ≤ 100).

# The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p 
# distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These integers denote the 
# indices of levels Little X can pass. The next line contains the levels 
# Little Y can pass in the same format. It's assumed that levels are 
# numbered from 1 to n.

# Output

# If they can pass all the levels, print "I become the guy.". If it's 
# impossible, print "Oh, my keyboard!" (without the quotes).

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
#4
# 3 1 2 3
# 2 2 4

# Output
# I become the guy.

# Input
# 4
# 3 1 2 3
# 2 2 3

# Output
# Oh, my keyboard!

# Note

# In the first sample, Little X can pass levels [1 2 3], and Little 
# Y can pass level [2 4], so they can pass all the levels both.

# In the second sample, no one can pass level 4.
