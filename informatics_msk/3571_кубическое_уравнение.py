a, b, c, d = map(float, input().split())


def f(x):
    return a * x * x * x + b * x * x + c * x + d


def find_root(l, r):
    if f(l) == 0:
        return l
    elif f(r) == 0:
        return r

    for i in range(100):
        m = l + (r - l) / 2.0
        if f(l) * f(m) <= 0:
            r = m
        else:
            l = m
    return l + (r - l) / 2.0


pts = [-1000.0, 1000.0]

if abs(a) > 1e-12:
    disc = 4.0 * b * b - 12.0 * a * c
    if disc >= 0:
        dr = disc**0.5
        x1 = (-2.0 * b + dr) / 6.0 / a
        x2 = (-2.0 * b - dr) / 6.0 / a
        if abs(x1) < 1000.0:
            pts.append(x1)
        if abs(x2) < 1000.0 and disc > 0:
            pts.append(x2)
elif abs(b) > 1e-12:
    x = -c / 2.0 / b
    if abs(x) < 1000.0:
        pts.append(x)

pts.sort()

ans = []

for i in range(len(pts) - 1):
    if f(pts[i]) * f(pts[i + 1]) <= 0:
        root = find_root(pts[i], pts[i + 1])
        ans.append(root)

ans.sort()
unique = []
for i in ans:
    if not unique or i - unique[-1] >= 1e-6:
        unique.append(i)

print(*unique)
