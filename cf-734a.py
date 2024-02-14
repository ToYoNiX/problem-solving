n = int(input())
i = input()

Anton = i.count('A')
Danik = i.count('D')

if Anton > Danik:
    print("Anton")
elif Danik > Anton:
    print("Danik")
else:
    print("Friendship")