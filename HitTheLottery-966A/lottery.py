n = int(input())

bills = 0

if n >= 100:
    while n >= 100:
        n -= 100
        bills += 1

if n >= 20:
    while n >= 20:
        n -= 20
        bills += 1

if n >= 10:
    while n >= 10:
        n -= 10
        bills += 1

if n >= 5:
    while n >= 5:
        n -= 5
        bills += 1

if n >= 1:
    while n >= 1:
        n -= 1
        bills += 1

print(bills)




# Note: Use PyPy 3 instead on Python in this problem because Python is slower


# Allen has a LOT of money. He has 𝑛 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1, 5, 10, 20, 100. What is the minimum number of bills Allen could receive after withdrawing his entire balance?
# 
# Input
# The first and only line of input contains a single integer 𝑛 (1≤𝑛≤109).
# 
# Output
# Output the minimum number of bills that Allen could receive.
# 
# Examples
# input
# 125
# output
# 3
# input
# 43
# output
# 5
# input
# 1000000000
# output
# 10000000
# Note
# In the first sample case, Allen can withdraw this with a 100 dollar bill, a 20 dollar bill, and a 5 dollar bill. There is no way for Allen to receive 125 dollars in one or two bills.
# 
# In the second sample case, Allen can withdraw two 20 dollar bills and three 1 dollar bills.
# 
# In the third sample case, Allen can withdraw 100000000 (ten million!) 100 dollar bills.
