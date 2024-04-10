s = input()

chars = []

for c in s:
    if c.isalpha():
        chars.append(c)

print(len(set(chars)))