matrix = [[0] * 5] * 5
for i in range(5):
    matrix[i] = input().split()

xPos = 0
yPos = 0
for i in range(5):
    for j in range(5):
        if matrix[i][j] == '1':
            xPos = i
            yPos = j

print(abs(2 - xPos) + abs(2 - yPos))
