def solve():
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    x = list(map(int, input().split()))

    for i in x:
        for j in range(n):
            if a[j] % (1 << i) == 0:
                a[j] += 1 << (i - 1)

    print(*a)


n = int(input())
for i in range(n):
    solve()
