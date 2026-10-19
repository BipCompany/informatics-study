n, m, l = map(int, input().split())

f = int(input())

if f:
    r = int(input())

    print(0 if r > n else min(m, n * l // r))

else:
    r = sorted(map(int, input().split()))

    cnt = 0
    s = 0
    for i in r:
        if i > n or s + i > n * l:
            break
        cnt += 1
        s += i

    print(cnt)
