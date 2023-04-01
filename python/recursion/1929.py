from sys import stdin


def ubak(n):
    if n == 1:
        print(1)
        return 0
    elif n % 2 != 0:
        ubak(3 * n + 1)
    else:
        ubak(n//2)
    print(n)


n = int(stdin.readline())
ubak(n)
