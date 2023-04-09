from sys import stdin

h, m = map(int, stdin.readline().strip().split())
time = int(stdin.readline())

m += time

if m >= 60:
    h += m // 60
    m = m % 60
if h >= 24:
    h = h % 24

print(h, m)
