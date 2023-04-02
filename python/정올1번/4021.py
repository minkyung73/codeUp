from sys import stdin

num = list(map(int, stdin.readline().strip().split(' ')))

total = 0
flag = 0
for i in num:
    if i % 2 == 1:
        flag = 1
        total += i

if flag:
    print(total)
else:
    print(-1)
