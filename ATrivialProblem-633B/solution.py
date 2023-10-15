# https://codeforces.com/problemset/problem/633/B
m = int(input())
zeros = []
zerosf = 0
currno = 1
while True:
    def submission(no,prime):
        b = no//prime
        noprimes = 0
        count = 1
        while (b>0):
            noprimes+=b
            count+=1
            b = no//(prime**count)
        return noprimes
    y = submission(currno,5)
    if (y==m):
        zeros.append(str(currno))
    if (y>m):
        break
    currno+=1
print(len(zeros))
print(' '.join(zeros))
