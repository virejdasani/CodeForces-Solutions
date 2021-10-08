#https://codeforces.com/problemset/problem/158/B

one=0
two=0
three=0
four=0
car=0
n=int(input())
L=list(map(int,input().split()))
l=len(L)

        
one=L.count(1)
two=L.count(2)
three=L.count(3)
four=L.count(4)

if ((two%2)*2+three>=one):
    car=two//2+four+three+two%2
else:
    if (one-((two%2)*2+three))%4>0:
        car=(one-((two%2)*2+three))//4+two//2+four+three+two%2+1
    else:
        car=(one-((two%2)*2+three))//4+two//2+four+three+two%2

#if three>1 and two%2>0h:
    #car+=0
if three!=0 and two!=0:
    if one%4>three:
    #if three>one%4:
        #car+=0
        if ((one%4)-three)>(two%2)*2:
            car+=1
            




        
print(car)
    
