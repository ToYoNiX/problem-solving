t = int(input()) 

while t:
    t -= 1

    nm = input()

    left = input().split()
    bottom = input().split()

    total = set(left + bottom)

    print(len(left + bottom) - len(total))
