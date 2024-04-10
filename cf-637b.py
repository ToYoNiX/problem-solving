n = int(input())
 
queue = []
seen = {}

while n:
    n -= 1
    name = input()
    queue.append(name)
    seen[name] = 0
    
while len(queue) > 0:
    if seen[queue[-1]] == 0:
        print(queue[-1])
        seen[queue[-1]] = 1
    
    queue.pop()