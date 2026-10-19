n, x, y = map(int, input().split())

def check(m):
    a = min(x, y)
    b = max(x, y)

    return m // a + (m - a) // b >= n


l = -1
r = n * max(x, y)

while r - l > 1:
    m = l + (r - l) // 2
    if check(m):
        r = m
    else:
        l = m

print(r)
