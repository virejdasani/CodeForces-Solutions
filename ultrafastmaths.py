# -*- coding: utf-8 -*-
"""
Created on Thu Sep 30 12:29:57 2021

@author: mayank
"""

l1=[int(x) for x in str(input())]
l2=[int(x) for x in str(input())]

s=''
L=len(l1)

for i in range (0,L):
    if l1[i]==l2[i]:
        s=s+'0'
    else:
        s=s+'1'
print(s)
