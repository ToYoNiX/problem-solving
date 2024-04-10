keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./"

c = input()
s = input()

ans = ""
if c == 'R':
    for i in s:
        ans += keyboard[keyboard.find(i) - 1]
else:
    for i in s:
        ans += keyboard[keyboard.find(i) + 1]
        
print(ans)