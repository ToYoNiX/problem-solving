t = int(input())
while t:
    t -= 1
    s = input()
    c = s[0]
    n = s[1]

    for i in range(1, 9):
        o = c + str(i)
        if o != s:
            print(o)

    for i in range(97, 105):
        o = chr(i) + n
        if o != s:
            print(o)