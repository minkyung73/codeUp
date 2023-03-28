from sys import stdin


def f(n):
    if n==0:
        return -1

    print(n)
    f(n-1)


n = int(stdin.readline())
f(n)