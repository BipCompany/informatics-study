def can(m, a, k):
    c = 0
    for i in a:
        c += i // m
    if c >= k:
        return True

    return False


n, k = map(int, input().split())
a = [int(input()) for _ in range(n)]

l = 0
r = 10000001
while r - l > 1:
    m = l + (r - l) // 2
    if can(m, a, k):
        l = m
    else:
        r = m
print(l)
