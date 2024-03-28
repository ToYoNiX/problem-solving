t = int(input())

while t:
    t -= 1
    s = input()
    a = s.count('A')
    b = 5 - a

    if a > b:
        print('A')
    else:
        print('B')
