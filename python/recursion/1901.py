from sys import stdin

n = int(stdin.readline())

def f(n):
    if n==0:
        return -1

    f(n-1)
    print(n)

f(n)