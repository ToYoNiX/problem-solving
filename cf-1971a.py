t = int(input())

while t:
    t -= 1
    
    x, y = [int(i) for i in input().split()]
    print(min(x, y), max(x, y))