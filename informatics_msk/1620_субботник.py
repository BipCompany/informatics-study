def can(m):
    global n, a, R, c
    cr = 0
    i = 0
    while i + c - 1 < n:
        if a[i + c - 1] - a[i] <= m:
            cr += 1
            i += c
        else:
            i += 1
    if cr >= R:
        return True
    else:
        return False


n, R, c = map(int, input().split())

a = sorted([int(input()) for _ in range(n)])

l = -1
r = a[-1] - a[0]

while r - l > 1:
    m = l + (r - l) // 2
    if can(m):
        r = m
    else:
        l = m
print(r)
