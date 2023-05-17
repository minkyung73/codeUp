from sys import stdin

n = int(stdin.readline().strip())
arr = []
for i in range(n):
    a = list(map(int, stdin.readline().strip().split()))
    arr.append(a)

print(arr)

