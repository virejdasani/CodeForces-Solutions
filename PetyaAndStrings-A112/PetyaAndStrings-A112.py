# https://codeforces.com/problemset/problem/112/A
### 112 A. Petya and Strings

# Store input and set strings to lowercase
str1 = input().lower()
str2 = input().lower()

# Compare strings
if str1 < str2:
    print(-1)
elif str1 > str2:
    print(1)
else:
    print(0)
    
# https://codeforces.com/problemset/problem/112/A
    
# Little Petya loves presents. His mum bought him two strings of the same size 
# for his birthday. The strings consist of uppercase and lowercase Latin letters. 
# Now Petya wants to compare those two strings lexicographically. The letters' 
# case does not matter, that is an uppercase letter is considered equivalent to 
# the corresponding lowercase letter. Help Petya perform the comparison.

# Input

# Each of the first two lines contains a bought string. The strings' lengths 
# range from 1 to 100 inclusive. It is guaranteed that the strings are of the 
# same length and also consist of uppercase and lowercase Latin letters.

# Output

# If the first string is less than the second one, print "-1". If the second 
# string is less than the first one, print "1". If the strings are equal, print 
# "0". Note that the letters' case is not taken into consideration when the 
# strings are compared.

# Contraints
# time limit per test
# 2 seconds
# memory limit per test
# 256 megabytes
# input
# standard input
# output
# standard output

# Examples

# Input
# aaaa
# aaaA

# Output
# 0

# Input
# abs
# Abz

# Output
# -1

# Input
# abcdefg
# AbCdEfF

# Output
# 1

# Note

# If you want more formal information about the lexicographical order (also 
# known as the "dictionary order" or "alphabetical order"), you can visit 
# the following site:

#    http://en.wikipedia.org/wiki/Lexicographical_order
