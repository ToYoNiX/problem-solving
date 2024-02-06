y = int(input())
y += 1
d = set(str(y))

while len(d) < 4:
    y += 1
    d = set(str(y))

print(y)
