n = int(input())
r = 0
while n:
    n -= 1
    d = input().split()
    p = int(d[0])
    q = int(d[1])
    if q - p >= 2:
        r += 1

print(r)
