f = input().split()
k = int(f[1])

a = input().split()
k = int(a[k - 1])

p = 0
for i in a:
    i = int(i)
    if i >= k and i > 0:
        p += 1

print(p)
