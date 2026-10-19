n, q = map(int, input().split())

a = list(map(int, input().split()))

for _ in range(q):
    i = int(input())

    l = 0
    r = n - 1
    while r - l > 1:
        m = l + (r - l) // 2
        if a[m] > i:
            r = m
        else:
            l = m
    if a[r] == i or a[l] == i:
        print("YES")
    else:
        print("NO")
