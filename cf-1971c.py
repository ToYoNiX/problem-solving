t = int(input())

while t:
    t -= 1
    a, b, c, d = [int(i) for i in input().split()]
    
    m1, m2 = min(a, b), max(a, b)
    
    isIntersect = False
    for i in range(m1, m2):
        if i == c or i == d:
            isIntersect = not isIntersect
    
    if isIntersect:
        print("YES")
    else:
        print("NO")