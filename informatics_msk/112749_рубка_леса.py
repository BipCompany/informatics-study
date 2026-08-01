def can(a, k, b, m, x, d):
    ax = a * (d - d // k)
    bx = b * (d - d // m)
    if ax + bx >= x:
        return True
    else:
        return False


a, k, b, m, x = map(int, input().split())

l = -1
r = 10**18

while r - l > 1:
    d = l + (r - l) // 2
    if can(a, k, b, m, x, d):
        r = d
    else:
        l = d
print(r)
