t = int(input())

while t:
    t -= 1
    h, m = [int(x) for x in input().split(':')]

    p = ""
    if h == 0:
        p = "AM"
        h = 12
    elif h < 12:
        p = "AM"
    elif h == 12:
        p = "PM"
    else:
        h -= 12
        p = "PM"

    print(f"{h:02}:{m:02} {p}")
