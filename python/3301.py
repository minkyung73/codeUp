from sys import stdin

n = int(stdin.readline())

cnt = 0
arr = [50000, 10000, 5000, 1000, 500, 100, 50, 10]
for i in arr:
    if n <= 0:
        break

    cnt += n // i
    n %= i

print(cnt)
    