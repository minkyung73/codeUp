from sys import stdin

person = stdin.readline().strip()

gender = int(person[7])
if gender == 1 or gender == 2:
    year = 1900 + int(person[:2])
else:
    year = 2000 + int(person[:2])
month = person[2:4]
day = person[4:6]

if gender == 1 or gender == 3:
    gender = 'M'
else:
    gender = 'F'

print('{}/{}/{} {}'.format(year, month, day, gender))

