n, a, b, w, h = map(int, input().split())


def check(m):
    ver = (w // (a + 2 * m)) * (h // (b + 2 * m))
    hor = (w // (b + 2 * m)) * (h // (a + 2 * m))
    if max(ver, hor) >= n:
        return True
    else:
        return False


l = 0
r = min(w, h) + 1

while r - l > 1:
    m = l + (r - l) // 2
    if check(m):
        l = m
    else:
        r = m
print(l)
