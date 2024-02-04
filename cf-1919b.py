T = int(input())
while T:
    n = int(input())
    s = input()
    plusCnt = s.count('+')
    minusCnt = n - plusCnt
    p = abs(plusCnt - minusCnt)
    print(p)
    T -= 1
