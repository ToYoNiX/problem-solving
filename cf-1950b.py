t = int(input())

s1 = "##..##..##..##..##..##..##..##..##..##.."
s2 = "..##..##..##..##..##..##..##..##..##..##"

while t:
    t -= 1
    
    n = int(input())

    l = n * 2

    isSec = False
    while n:
        n -= 1
        if isSec:
            [print(s2[:l]) for i in range(2)]
        else:
            [print(s1[:l]) for i in range(2)]

        isSec = not isSec
