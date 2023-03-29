from sys import stdin

n = int(stdin.readline())


def star(n):
    if n == 0:
        return 0
    print("*", end='')
    return star(n-1)


def f(n):
    if n == 0:
        return -1
    f(n-1)
    star(n)
    print()


f(n)
