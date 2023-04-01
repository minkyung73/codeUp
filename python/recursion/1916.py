from sys import stdin

arr = [0] * 201


def fibo(n):
    global arr

    if n == 1 or n == 2:
        arr[n] = 1
    elif arr[n] == 0:
        arr[n] = (fibo(n-1) + fibo(n-2)) % 10009

    return arr[n]


n = int(stdin.readline())
print(fibo(n))


