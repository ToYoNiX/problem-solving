i = input().split()
n = int(i[0])
k = int(i[1])

while k:
    k -= 1
    if n % 10 != 0:
        n -= 1
    else:
        n //= 10

print(n)
        
