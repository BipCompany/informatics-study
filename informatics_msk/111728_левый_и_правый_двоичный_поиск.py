n, k = map(int, input().split())
a = list(map(int, input().split()))
b = map(int, input().split())

for i in b:
    l = -1
    r = n - 1
    while r - l > 1:
        m = (l + r) // 2
        if a[m] >= i:
            r = m
        else:
            l = m
    left = r

    l = 0
    r = n
    while r - l > 1:
        m = (l + r + 1) // 2
        ma = a[m]
        if a[m] <= i:
            l = m
        else:
            r = m
    right = l
    if a[left] != i or a[right] != i:
        print(0)
    else:
        print(left + 1, right + 1)
