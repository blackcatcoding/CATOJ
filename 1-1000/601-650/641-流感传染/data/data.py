import random
import math
# ch_li = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '+', '*', '#', '!', '$']

fin = open("10.in", "w", encoding="utf8")
# fout = open("1.out", "w", encoding="utf8")

n = 100

fin.write(str(n) + '\n')

for i in range(n):
	for j in range(n):
		t = random.randint(1, 10)
		if t <= 5:
			fin.write('.')
		elif t <= 8:
			fin.write('#')
		else:
			fin.write('@')
	fin.write('\n')

fin.write(str(n // 3))