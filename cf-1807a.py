t = int(input())

while t:
    t -= 1
    i = input().split()
    
    a = int(i[0])
    b = int(i[1])
    c = int(i[2])

    if a + b == c:
        print('+')
    else:
        print('-')