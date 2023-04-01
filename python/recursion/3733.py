from sys import stdin

dp = [0] * 10000001


def ubak(n, count):
    count += 1
    if dp[n] == 0:
        if n == 1:
            return count
        elif n % 2 != 0:
            return ubak(3 * n + 1, count)
        else:
            return ubak(n // 2, count)
    # else:


    return count


a, b = map(int, stdin.readline().split(' '))
cnt_arr = []
for i in range(a, b+1):
    cnt = 0
    cnt_arr.append(ubak(i, cnt))

# print(arr)
print(cnt_arr.index(max(cnt_arr)) + a, max(cnt_arr))

