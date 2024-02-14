t = int(input())
while t:
    t -= 1
    s = [3] * 3
    for i in range(3):
        s[i] = input()

    A = sum(i.count('A') for i in s)
    B = sum(i.count('B') for i in s)
    C = sum(i.count('C') for i in s)

    if A == 2:
        print("A")
    elif B == 2:
        print("B")
    else:
        print("C")