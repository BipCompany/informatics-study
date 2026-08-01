def can(t):
    global n, x, y
    t -= min(x, y)
    if t // x + t // y >= n - 1:
        return True

    return False


n, x, y = map(int, input().split())

l = -1
r = 1000000000
while r - l > 1:
    m = l + (r - l) // 2
    if can(m):
        r = m
    else:
        l = m
print(r)
