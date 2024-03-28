n = int(input())
a = input().split()

pos = []
neg = []
zer = []

for i in a:
    i = int(i)
    if i > 0:
        pos.append(i)
    elif i < 0:
        neg.append(i)
    else:
        zer.append(i)

if len(pos) == 0:
    for i in range(2):
        pos.append(neg[i])
        neg.pop(i)

if len(neg) % 2 == 0:
    zer.append(neg[0])
    neg.pop(0)

print(len(neg), *neg, sep = ' ')
print(len(pos), *pos, sep = ' ')
print(len(zer), *zer, sep = ' ')
