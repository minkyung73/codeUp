from sys import stdin

n = int(stdin.readline())

def ubak(n):
    if n == 1:
        print(1)
        return 0
    if n % 2 == 1:
        return ubak(3 * n + 1)
    else:
        return ubak(n // 2)
    print(n)

ubak(n)