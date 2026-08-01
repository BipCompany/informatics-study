a, b, c, d = map(int, input().split())


def can(m):
    if min(a, b) + min(c, d) >= m * m:
        return True

    return False


l = 0
r = int(1e18) + 1
while r - l > 1:
    m = l + (r - l) // 2
    if can(m):
        l = m
    else:
        r = m
print(l)
