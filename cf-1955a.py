t = int(input())

while t:
    t -= 1
    n, a, b = [int(x) for x in input().split()]
    
    total_with_disc = int(n / 2) * b + (0 if n % 2 == 0 else a)
    total_without_disc = n * a
    
    print(min(total_without_disc, total_with_disc))