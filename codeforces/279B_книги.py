n, t = map(int, input().split())
a = list(map(int, input().split()))

s = 0
l = 0
mx = 0
for r in range(n):
    s += a[r]
    while s > t:
        s -= a[l]
        l += 1
    if r - l + 1 > mx:
        mx = r - l + 1

print(mx)
