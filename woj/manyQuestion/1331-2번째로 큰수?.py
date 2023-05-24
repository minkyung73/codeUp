from sys import stdin

n = int(stdin.readline().strip())
L = list(map(int, stdin.readline().split()))
L2 = []

for i in range(n):
    if L[i] != max(L):
        L2.append(L[i])

print(max(L2))
