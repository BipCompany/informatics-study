n = int(input())
a = list(map(int, input().split()))
k = int(input())
b = map(int, input().split())

for i in b:
    l = -1
    r = n - 1
    while r - l > 1:
        m = (r + l) // 2
        if a[m] < i:
            l = m
        else:
            r = m
    if a[r] != i:
        print(0)
        continue
    left = r

    l = 0
    r = n
    while r - l > 1:
        m = (r + l) // 2
        if a[m] > i:
            r = m
        else:
            l = m
    right = l
    print(right - left + 1)
