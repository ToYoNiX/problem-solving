n = int(input())
isHate = True
while n:
    n -= 1
    print("I", end = " ")
    if isHate:
        print("hate", end = " ")
    else:
        print("love", end = " ")

    if n > 0:
        print("that", end = " ")

    isHate = not isHate

print("it")
