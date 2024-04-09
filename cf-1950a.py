t = int(input())

while t:
    t -= 1
    a, b, c = [int(x) for x in input().split()]

    if c > b and b > a:
        print("STAIR")
    elif b > a and b > c:
        print("PEAK")
    else:
        print("NONE")

