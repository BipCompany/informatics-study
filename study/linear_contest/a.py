n, x = map(int, input().split())
a = sorted(enumerate(map(int, input().split())), key=lambda x: x[1])

r = n - 1
l = 0
res = (-1,)
while r - l >= 1:
    while r - l > 1 and a[r][1] > x - a[l][1]:
        r -= 1
    if a[r][1] + a[l][1] == x:
        res = (a[l][0] + 1, a[r][0] + 1)
        break
    l += 1

print(*res)
