from sys import stdin

num = list(map(int, stdin.readline().strip().split(' ')))
num.sort()
print(num[2])
