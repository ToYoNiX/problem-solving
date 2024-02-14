t = int(input())

while t:
    t -= 1
    i = input().split()

    if i[0] == i[1]:
        print(i[2])
    elif i[1] == i[2]:
        print(i[0])
    else:
        print(i[1])
