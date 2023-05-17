from sys import stdin

t = int(stdin.readline())
space = [[0] * 100 for _ in range(100)]

for _ in range(t):
    x, y = map(int, stdin.readline().split())

    for i in range(x, x+10):
        for j in range(y, y+10):
            space[i][j] = 1

area = 0
for k in range(100):
    area += space[k].count(1)

print(area)
