i = input().split()
k = int(i[0])
w = int(i[1])
n = int(i[2])
t = 0

for i in range(1, n + 1):
    t += i * k

if w >= t:
    print(0)
else:
    print(t - w)
