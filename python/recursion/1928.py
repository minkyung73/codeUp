from sys import stdin

n = int(stdin.readline())


def ubak(n):
    print(n)
    if n == 1:
        return 1

    if n % 2 == 1:
        return ubak(3 * n + 1)
    else:
        return ubak(n//2)


ubak(n)
