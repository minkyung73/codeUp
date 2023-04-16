from sys import stdin

plate = stdin.readline().strip()

height = 10

for i in range(1, len(plate)):
    if plate[i-1] == plate[i]:
        height += 5
    else:
        height += 10

print(height)
