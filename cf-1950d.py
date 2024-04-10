isMultiBinary = []
def gen(n):
    if n > 10e6:
        return
    
    isMultiBinary.append(n)
    
    gen(n * 10)
    gen(n * 11)
    gen(n * 100)
    gen(n * 101)
    gen(n * 110)
    gen(n * 111)
    gen(n * 1000)
    gen(n * 1001)
    gen(n * 1010)
    gen(n * 1011)
    gen(n * 1100)
    gen(n * 1101)
    gen(n * 1110)
    gen(n * 1111)
gen(1)

def isBinary(n):
    while n:
        if n % 10 != 1 and n % 10 != 0:
            return False
        n = int(n / 10)
    return True

t = int(input())

while t:
    t -= 1
    
    i = int(input())
    
    if isBinary(i) or i in isMultiBinary:
        print("YES")
    else:
        print("NO")