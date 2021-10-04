# -*- coding: utf-8 -*-
"""
Created on Sun May  2 18:35:55 2021

@author: mayank
"""

x=0
y=0
z=0        
n=int(input())
for i in range (n):
    k=input()
    l=[int(x) for x in k.split()]
    x+=l[0]
    y+=l[1]
    z+=l[2]
if x==y==z==0:
    print("YES")
else:
    print("NO")    
    
    
    
    
