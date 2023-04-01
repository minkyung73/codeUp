from sys import stdin


def binary(n):
    if n//2 != 0:
        binary(n//2)
        print(n % 2, end='')
    else:
        print(n % 2, end='')
        return 0


n = int(stdin.readline())
binary(n)