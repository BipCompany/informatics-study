from math import sqrt

A, B, C, D = map(float, input().split())


def f(x):
    return A * x * x * x + B * x * x + C * x + D


def find_root(l, r):
    if f(l) == 0:
        return l
    if f(r) == 0:
        return r

    for i in range(100):
        m = l + (r - l) / 2.0
        if f(l) * f(m) <= 0:
            r = m
        else:
            l = m
    return l + (r - l) / 2.0


pts = [-1000.0, 1000.0]

if abs(A) > 1e-12:
    # 3ax^2 + 2bx + c = 0
    d = 4 * B * B - 12.0 * A * C
    if d >= 0:
        x1 = (-2.0 * B + d**0.5) / 6.0 / A
        x2 = (-2.0 * B - d**0.5) / 6.0 / A
        if abs(x1) <= 1000.0:
            pts.append(x1)
        if d > 0 and abs(x2) <= 1000.0:
            pts.append(x2)
elif abs(B) > 1e-12:
    # 2bx + c = 0
    x = -C / 2.0 / B
    if abs(x) <= 1000.0:
        pts.append(x)

pts.sort()

ans = []
for i in range(len(pts) - 1):
    l = pts[i]
    r = pts[i + 1]
    if f(l) * f(r) <= 0:
        root = find_root(l, r)
        ans.append(root)
ans.sort()

unique = []
for i in ans:
    if not unique or i - unique[-1] >= 1e-6:
        unique.append(i)

print(*unique)
