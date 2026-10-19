x, y = map(int, input().split())

def fx(m):
    s = 0
    s += (1 + m * y) * m * y // 2
    s -= (m * y + 1 + y * x) * y * (x - m) // 2
    return abs(s)

def fy(m):
    s = 0
    z = (2 + y * (x - 1)) * x // 2
    s += (2 * z + x * (m - 1)) * m // 2
    s -= (2 * z + x * (m + y - 1)) * (y - m) // 2
    return abs(s)

l = 1
r = x
while r - l > 2:
    m1 = l + (r - l) // 3
    m2 = r - (r - l) // 3

    if fx(m1) < fx(m2):
        r = m2
    else:
        l = m1

mn = fx(l)
for i in range(l + 1, r + l):
    mn = min(mn, fx(i))

l = 1
r = y
while r - l > 2:
    m1 = l + (r - l) // 3
    m2 = r - (r - l) // 3

    if fy(m1) < fy(m2):
        r = m2
    else:
        l = m1

for i in range(l + 1, r + l):
    mn = min(mn, fy(i))

print(mn)
