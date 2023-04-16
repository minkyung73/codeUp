from sys import stdin

n = int(stdin.readline().strip())
arr = list(map(int, stdin.readline().split()))

current_score = arr[0]
total = current_score

for i in range(1, n):
    if arr[i] == 0:
        current_score = 0
    else:
        current_score += 1
        total += current_score

print(total)