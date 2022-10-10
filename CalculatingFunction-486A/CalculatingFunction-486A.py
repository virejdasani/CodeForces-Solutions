# https://codeforces.com/problemset/problem/486/A
### 486 A. Calculating Function

# Store input and convert to int
n = int(input())

# Get number of even and odd numbers
x = n//2
y = x if n%2 == 0 else x+1

# Calculate function
f = x*(x+1) - y**2
print(f)
    
# https://codeforces.com/problemset/problem/486/A


# For a positive integer n let's define a function f:

# f(n) = -1 + 2 - 3 + .. + ((-1)^n)*n

# Your task is to calculate f(n) for a given integer n.

# Input

# The single line contains the positive integer n (1 ≤ n ≤ 1015).

# Output

# Print f(n) in a single line.

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
# 4

# Output
# 2

# Input
# 5

# Output
# -3

# Note

# f(4) =  - 1 + 2 - 3 + 4 = 2

# f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3
