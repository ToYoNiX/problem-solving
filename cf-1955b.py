t = int(input())

while t:
    t -= 1
    
    numbers = {}
    n, c, d = [int(x) for x in input().split()]
    
    b = sorted([int(x) for x in input().split()])
    
    for i in b:
        if i not in numbers:
            numbers[i] = 0
        numbers[i] += 1
        
    progressiveMat = [[0 for i in range(n)] for j in range(n)]
    progressiveMat[0][0] = b[0]
    
    for i in range(1, n):
        progressiveMat[i][0] = progressiveMat[i - 1][0] + c
        
    for i in range(n):
        for j in range(1, n):
            progressiveMat[i][j] = progressiveMat[i][j - 1] + d
            
    for i in range(n):
        for j in range(n):
            if progressiveMat[i][j] not in numbers:
                numbers[progressiveMat[i][j]] = 0
            numbers[progressiveMat[i][j]] -= 1
    
    ans = True
    for num, value in numbers.items():
        if value != 0:
            ans = False
            break
    
    print("YES" if ans else "NO")