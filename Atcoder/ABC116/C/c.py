#!usr/bin/env python

N = int(input())
h = list(map(int, input().split()))
result, count = 0, 1
while count < 101:
    once = False
    continuous = False
    for cnt in range(N):
        if h[cnt] >= count:
            continuous = True
            once = True
        else:
            if continuous:
                result += 1
            continuous = False
    if not once:
        break
    elif continuous:
        result += 1
    count += 1
print(result)
