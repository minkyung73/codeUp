from sys import stdin

arr = list(map(int, stdin.readline().split()))

print(max(arr))
print(arr.index(max(arr))+1)


