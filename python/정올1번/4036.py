from sys import stdin

n = int(stdin.readline().strip())
m = int(stdin.readline().strip())

for b in range(1, n//2+1):
    a = n - b
    if a - b == m:
        break

print(a)
print(b)

