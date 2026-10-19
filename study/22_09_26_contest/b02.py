def solve():
    n = int(input())
    a = []
    b = []
    for _ in range(n):
        ai, bi = map(int, input().split())
        a.append(ai)
        b.append(bi)

    def check(m):
        c = 0
        for i in range(n):
            if m - 1 - c <= a[i] and c <= b[i]:
                c += 1
            if c == m:
                break
        return c == m

    l = 1
    r = n + 1
    while r - l > 1:
        m = l + (r - l) // 2
        if check(m):
            l = m
        else:
            r = m
    print(l)


t = int(input())

for _ in range(t):
    solve()
