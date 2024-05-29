t = int(input())

while t:
    t -= 1
    s = list(input())
    
    if (len(set(s)) == 1):
        print("NO")
        continue
    
    for i in range(1, len(s)):
        tmp = s[i]
        s[i] = s[i - 1]
        s[i - 1] = tmp
        
    s = ''.join(s)
    print("YES\n" + s)