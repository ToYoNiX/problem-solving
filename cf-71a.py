n = int(input())
while n:
    n -= 1
    s = input()
    l = len(s)
    if l > 10:
        print(s[0] + str(l - 2) + s[l - 1])
    else:
        print(s)

