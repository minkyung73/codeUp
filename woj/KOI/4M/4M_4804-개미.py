from sys import stdin

w, h = map(int, stdin.readline().strip().split())
p, q = map(int, stdin.readline().strip().split())
hour = int(stdin.readline())

flag = 0
if (w-p) < (h-q):
    hour -= w-p
    q += w - p
    p = w
    flag = 2
else:
    hour -= h - q
    p += h - q
    q = h
    flag = 4

while hour > 0:
    if p == 0:
        continue
    elif p == w:

    elif q == 0:
        continue
    elif q == h:


