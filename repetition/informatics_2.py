n, k = map(int, input().split())

a = list(map(int, input().split()))
b = map(int, input().split())

for i in b:
    l = -1
    r = n - 1
    while r - l > 1:
        m = l + (r - l) // 2
        if a[m] >= i:
            r = m
        else:
            l = m
    if abs(a[l] - i) <= abs(a[r] - i):
        print(a[l])
    else:
        print(a[r])
