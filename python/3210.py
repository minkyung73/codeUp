from sys import stdin

before, after = map(int, stdin.readline().split(' '))

cnt = 0
while before != after:
    arr = [before+1, before-1, before+5, before-5, before+10, before-10]
    arr2 = []
    for i in arr:
        arr2.append(abs(after-i))

    # print(arr)
    # print(arr2)

    idx = arr2.index(min(arr2))
    before = arr[idx]
    # print("idx: ", idx)
    # print("before: ", before, "\n")

    cnt += 1

print(cnt)

