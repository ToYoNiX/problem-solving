a = [0]
 
for i in range(int(2e5 + 1)):
    n = 0
    while i:
        n += i % 10
        i = int(i / 10)
    a.append(n + a[-1])
 
t = int(input())
while(t):
    t -= 1
    i = int(input())
    print(a[i + 1])
