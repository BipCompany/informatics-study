n, a, b, w, h = map(int, input().split())


def can(m):
    mx = max(w, h) // (min(a, b) + 2 * m)
    mn = min(w, h) // (max(a, b) + 2 * m)
    x1 = mx * mn
    mx = min(w, h) // (min(a, b) + 2 * m)
    mn = max(w, h) // (max(a, b) + 2 * m)
    x2 = mn * mx
    if max(x1, x2) >= n:
        return True

    return False


l = 0
r = 10**18 + 1

while r - l > 1:
    m = l + (r - l) // 2
    if can(m):
        l = m
    else:
        r = m
print(l)
