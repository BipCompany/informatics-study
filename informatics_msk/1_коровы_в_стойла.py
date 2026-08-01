def can(m):
    global n, k, a
    lst = 0
    c = 1
    for i in range(1, n):
        if a[i] - a[lst] >= m:
            c += 1
            lst = i
        if c >= k:
            return True
    return False


n, k = map(int, input().split())
a = list(map(int, input().split()))

l = 1
r = a[-1] - a[0] + 1

while r - l > 1:
    m = l + (r - l + 1) // 2
    if can(m):
        l = m
    else:
        r = m
print(l)
