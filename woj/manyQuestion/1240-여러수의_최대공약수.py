from sys import stdin


def gcd(n1, n2):
    result = 1
    for i in range(1, min(n1, n2)+1):
        if n1 % i == 0 and n2 % i == 0:
            result = i
    return result


a, b, c = map(int, stdin.readline().split())
print(gcd(gcd(a, b), c))

