w, h, n = map(int, input().split())

l = 0
r = 10**18

while r - l > 1:
    m = l + (r - l) // 2
    if (m // w) * (m // h) < n:
        l = m
    else:
        r = m

print(r)
