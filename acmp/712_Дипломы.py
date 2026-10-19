w, h, n = map(int, input().split())

l = 1
r = max(w * n, h * n)

while r - l > 1:
    m = (r - l) // 2 + l
    if (m // w) * (m // h) >= n:
        r = m
    else:
        l = m

print(r)
