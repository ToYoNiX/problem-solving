s, n = [int(i) for i in input().split()]
 
l = []
for i in range(n):
    l.append([int(i) for i in input().split()])
l.sort()
 
flag = True
for x, y in l:
    if s <= x:
        flag = False
        break
    
    s += y
 
if flag:
    print("YES")
else:
    print("NO")