n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

v = 0
r = 0
for d in range(n):
    cr = abs(a[d] - b[v])
    while v < m - 1 and abs(a[d] - b[v + 1]) <= cr:
        v += 1
        cr = abs(a[d] - b[v])
    r = max(r, cr)
print(r)
