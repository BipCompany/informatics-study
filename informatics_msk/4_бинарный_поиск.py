n, k = map(int, input().split())

a = list(map(int, input().split()))
b = map(int, input().split())

for i in b:
    l = 0
    r = n
    while r - l > 1:
        m = (l + r) // 2
        if a[m] <= i:
            l = m
        else:
            r = m
    if a[l] == i:
        print("YES")
    else:
        print("NO")
