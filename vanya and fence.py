# -*- coding: utf-8 -*-
"""
Created on Wed Sep 29 18:57:30 2021

@author: mayank
"""

n,h=map(int,input().split())
L=list(map(int,input().split()))
w=0
for i in range (0,n):
    if h<L[i]:
        w+=2
    else:
        w+=1
print(w)