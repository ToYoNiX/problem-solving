def isVowel (c):
    if c == 'a' or c == 'o' or c == 'y' or c == 'e' or c == 'u' or c == 'i':
        return 1
    
    return 0

s = list(input().lower())
ans = ""

for i in range(len(s)):
    if (not isVowel(s[i])):
        ans += s[i]

ans = list(ans)
for i in ans:
    print("." + i, end = '')