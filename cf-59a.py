s = input()
upperCnt = 0
lowerCnt = 0
for c in s:
    if c.isupper():
        upperCnt += 1
lowerCnt = len(s) - upperCnt
if upperCnt > lowerCnt:
    print(s.upper())
else:
    print(s.lower())
