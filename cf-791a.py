w = input().split()
l = int(w[0])
b = int(w[1])
y = 0

while l <= b:
    l *= 3
    b *= 2
    y += 1

print(y)
