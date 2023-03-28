from sys import stdin
import sys

sys.setrecursionlimit(10**7)

def f(n):
    global s
    if n < 1:
        return s
    s += n
    f(n-1)


s = 0
n = int(stdin.readline())
f(n)
print(s)
