def solve():
    n, s = map(int, input().split())
    a = list(map(int, input().split()))
    cur_s = sum(a)

    if cur_s < s:
        print(-1)
        return
    elif cur_s == s:
        print(0)
        return

    mn = n
    cur_s = 0
    l = 0
    for r in range(n):
        cur_s += a[r]
        while cur_s > s:
            cur_s -= a[l]
            l += 1
        if cur_s == s and n - r + l - 1 < mn:
            mn = n - r + l - 1
    print(mn)


t = int(input())
for _ in range(t):
    solve()
