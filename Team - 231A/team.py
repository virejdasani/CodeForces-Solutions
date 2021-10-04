k = 0
for i in range(int(input())):
    a, b, c = map(int, input().split())
    if a+b+c >= 2:
        k += 1
print(k)
