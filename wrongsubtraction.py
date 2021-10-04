n,k=map(int, input().split())

c=0

while c<k :
    if n%10==0:
        n=n/10
        c+=1
    else:
        n=n-1
        c+=1
print (int(n))