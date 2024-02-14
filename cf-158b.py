n = int(input())
s = input()

fours = s.count('4')
threes = s.count('3')
twos = s.count('2')
ones = s.count('1')

fours += threes
ones -= threes

fours += twos // 2
if twos % 2 != 0:
    fours += 1
    ones -= 2

if ones > 0:
    ones += 3
    fours += ones // 4

print(fours)