def solve():
    n, m = map(int, input().split())
    b, *hb = map(int, input().split())
    g, *hg = map(int, input().split())

    a = max(n, m)
    c = min(n, m)
    while a % c != 0:
        a, c = c, a % c
    NOD = c

    for i in range(NOD):
        f = False
        for j in range(i, n, NOD):
            if j in hb:
                f = True
                break
        if f:
            continue
        for j in range(i, m, NOD):
            if j in hg:
                f = True
                break
        if not f:
            print("NO")
            return

    print("YES")


solve()
