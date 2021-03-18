n = input()
arr = []
counter = 0

for i in range(int(n)):
    arr.append(input())

# Check if consecutive elements in the array are the same. If they aren't, add one to counter
for i in range(len(arr) - 1):
    if arr[i] == arr[i + 1]:
        pass
    else:
        counter += 1

# We add 1 to the counter because the code above counts the number of spaces between the magnet groups
# Not the groups themselves like this:
# V V => I counts that there is 1 space between the V's but there are acctually spaces + 1 V's. Hence the +1
print(counter + 1)
