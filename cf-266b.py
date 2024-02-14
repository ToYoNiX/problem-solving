i = input().split()
s = list(input())

n = int(i[0])
t = int(i[1])

while t:
    t -= 1
    i = 0
    while i < n - 1:
        if s[i] == 'B' and s[i + 1] == 'G':
            s[i] = 'G'
            s[i + 1] = 'B'
            i += 1
        i += 1

s = ''.join(s)
print(s)
