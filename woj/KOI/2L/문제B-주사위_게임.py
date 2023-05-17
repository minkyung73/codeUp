from sys import stdin

n = int(stdin.readline().strip())
arr = []

for i in range(n):
    a, b, c = map(int, input().split())

    if a == b == c:
        arr.append(10000 + (a * 1000))
    elif a == b or b == c:
        arr.append(1000 + (b * 100))
    elif a == c:
        arr.append(1000 + (a * 100))
    else:
        arr.append(max(a, b, c) * 100)

print(max(arr))
