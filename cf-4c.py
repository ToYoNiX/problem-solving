n = int(input())

registered = {}

while n:
    n -= 1
    s = input()
    
    if s in registered:
        print(s, registered[s], sep='')
    else:
        registered[s] = 0
        print("OK")

    registered[s] += 1
