a, b, c, d = map(int, input().split())

l = a
r = b

cnt = 0
ymin = c + 1

for x in range(a, b + 1):
    while ymin - 1 >= b and x + ymin - 1 > c:
        ymin -= 1
    if ymin > c:
        continue

    p = d - x + 1

    r = min(c, p - 1)
    if ymin <= r:
        y = (r + ymin) * (r - ymin + 1) // 2
        cnt += (x - c) * (r - ymin + 1) + y

        if r + 1 <= c:
            cnt += (d - c + 1) * (c - r)
    elif ymin <= c:
        cnt += (d - c + 1) * (c - ymin + 1)

print(cnt)
