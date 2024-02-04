n = int(input())
p = 0
while n:
    n -= 1
    s = input()
    if s.count('1') > 1:
        p += 1

print(p)

