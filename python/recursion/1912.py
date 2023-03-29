from sys import stdin

n = int(stdin.readline())


def fibo(n):
    if n == 1:
        return 1
    return n*fibo(n-1)

print(fibo(n))
