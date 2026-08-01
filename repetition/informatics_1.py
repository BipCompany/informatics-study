n, k = map(int, input().split())
a = list(map(int, input().split()))


def check(m):
    c = 1
    prev = a[0]
    for i in a:
        if i - prev >= m:
            c += 1
            prev = i
    if c >= k:
        return True


l = 0
r = a[-1] + 1

while r - l > 1:
    m = l + (r - l) // 2
    if check(m):
        l = m
    else:
        r = m
print(l)
