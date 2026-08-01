def solve():
    n = int(input())

    a = list(map(int, input().split()))
    f = True
    b = sorted(a)
    for i in range(n - 1):
        if a[i] > a[i + 1]:
            f = False
            break
    if f:
        print(-1)
        return

    f = False
    k = 1000000010
    for i in range(n):
        if max(a[i] - b[0], b[-1] - a[i]) < k and b[i] != a[i]:
            k = max(a[i] - b[0], b[-1] - a[i])

    print(k)


n = int(input())
for i in range(n):
    solve()
