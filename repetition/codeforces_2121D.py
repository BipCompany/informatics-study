def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    r = []
    f = False
    while not f:
        f = True
        for i in range(n - 1):
            if a[i] > a[i + 1]:
                a[i], a[i + 1] = a[i + 1], a[i]
                f = False
                r.append(f"1 {i + 1}")
            if b[i] > b[i + 1]:
                b[i], b[i + 1] = b[i + 1], b[i]
                f = False
                r.append(f"2 {i + 1}")
    for i in range(n):
        if a[i] > b[i]:
            a[i], b[i] = b[i], a[i]
            r.append(f"3 {i + 1}")
    print(len(r))
    if r:
        print(*r, sep="\n")


t = int(input())
for i in range(t):
    solve()
