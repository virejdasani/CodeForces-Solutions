# -*- coding: utf-8 -*-
"""
Created on Wed May  5 16:33:20 2021

@author: mayank
"""

x=str(input())
l=list(x)

s=0
u=0
for i in range (0,len(l)):
    if ord(l[i])>96:
        s+=1
        
    else:
        u+=1
        
if s==u or s>u:
    print(x.lower())
else:
    print(x.upper())