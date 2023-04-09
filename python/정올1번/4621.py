from sys import stdin

p, q = map(int, stdin.readline().split())
arr = [1]

for i in range(2, p+1):
    if len(arr) == q:
        print(arr[-1])
        break
    if p % i == 0:
        arr.append(i)

if len(arr) < q:
    print(0)
