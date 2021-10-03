#https://codeforces.com/problemset/problem/567/A


n = int(input())
cities = list(map(int, input().split(" ")))

for i in range(len(cities)):
  minimum = 0 # tmp
  maximum = 0 # tmp
  if i == 0:
    minimum = cities[ 1] - cities[0]
    maximum = cities[-1] - cities[0]
  elif i == n - 1:
    minimum = cities[-1] - cities[i - 1]
    maximum = cities[-1] - cities[0]
  else:
    if cities[i] - cities[i-1] > cities[i+1] - cities[i]:
      minimum = cities[i+1] - cities[i]
    else:
      minimum = cities[i] - cities[i-1]

    if cities[i] - cities[0] > cities[-1] - cities[i]:
      maximum = cities[i] - cities[0]
    else:
      maximum = cities[-1] - cities[i]

  print("%i %i" %(minimum, maximum))
