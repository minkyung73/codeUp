from sys import stdin

arr = []
for i in range(7):
    n = int(stdin.readline().strip())
    if n % 2 == 1:
        arr.append(n)

print(sum(arr))
print(min(arr))


