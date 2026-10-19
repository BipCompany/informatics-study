from bisect import bisect_left


n, m = map(int, input().split())
k = sorted(set(map(int, input().split())))
lk = len(k)

for i in range(m):
    a, b, c = map(int, input().split())

    check = 4 * a * c
    if check <= 0:
        print("NO")
        continue


    l = bisect_left(k, b) - 1

    if l >= lk:
        print("NO")
    elif (b - k[l]) ** 2 < check or l < lk - 1 and (b - k[l + 1]) ** 2 < check:
        print("YES")
    else:
        print("NO")
