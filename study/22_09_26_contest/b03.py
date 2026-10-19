n, k, c = map(int, input().split())

a = list(map(int, input().split()))

def check(m):
    p = [0]
    s = 0
    for i in a:
        s += i - m
        p.append(s)

    l = p[0]
    mx = p[k] - p[0]
    for r in range(k, n + 1):
        l = min(l, p[r - k])
        mx = max(mx, p[r] - l)

    return mx >= 0

ll = 0
rr = c

for _ in range(20):
    m = ll + (rr - ll) / 2
    if check(m):
        ll = m
    else:
        rr = m

print((ll + rr) / 2)
