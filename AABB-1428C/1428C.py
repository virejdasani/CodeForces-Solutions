# https://codeforces.com/problemset/problem/1428/C
from collections import deque
t = int(input())

for tt in range(t):
	s = input()
	
	pilha = deque()
	ultima = ""
	for letra in s:
		aux = ultima + letra
		if aux == "AB" or aux == "BB":
			pilha.popleft()
			if not pilha:
				ultima = ""
			else:
				ultima = pilha[len(pilha)-1]
		else:
			pilha.append(letra)
			ultima = letra
				
	print(len(pilha))
