from sys import stdin

a, b = map(int, stdin.readline().split(' '))

def f(a, b):
    if a > b:
        return -1

    if a%2 == 1:
        print(a, end=' ')
    f(a+1, b)


f(a, b)