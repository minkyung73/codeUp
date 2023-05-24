from sys import stdin

arr = list(map(int, stdin.readline().split()))
a, b = map(int, stdin.readline().split())


if a > 0 and b > 0:
    for i in arr[a-1:b]:
        print(i)
elif a < 0 and b < 0:
    if b != -1:
        for i in arr[a:b+1]:
            print(i)
    else:
        for i in arr[a:]:
            print(i)
elif a > 0 and b < 0:
    if b != -1:
        for i in arr[a-1:b+1]:
            print(i)
    else:
        for i in arr[a-1:]:
            print(i)
else:
    for i in arr[a:b]:
        print(i)

