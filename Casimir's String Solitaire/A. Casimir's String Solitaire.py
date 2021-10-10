# -*- coding: utf-8 -*-
"""
Created on Mon Sep 27 19:49:40 2021

@author: SHRIDHAR KAPSE
"""

import numpy as np

a=[]
b=[]
c=[]
t = int(input())
for i in range(t):
    s=input()
    
    a.append(s.count("A"))
    b.append(s.count("B"))
    c.append(s.count("C"))

for i,j,k in zip(a,b,c):
 if i+k == j:
   print("YES")
 else:
   print("NO")