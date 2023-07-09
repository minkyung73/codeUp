from sys import stdin

n = int(stdin.readline().strip())

L = []
for _ in range(n):
    L.append(int(stdin.readline().strip()))

L2 = []
for l in L:
    if l != 0:
        L2.append(l)
    else:
        L2.pop()

print(sum(L2))