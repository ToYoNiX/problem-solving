n = int(input())
ans = 0

while n:
    n -= 1
    s = input()
    if s == "X++" or s == "++X":
        ans += 1
    else:
        ans -= 1

print(ans)
