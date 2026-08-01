n = int(input())
a = list(map(int, input().split()))

res = []
l = 0
r = n - 1
last = 0
while l <= r:
    if a[l] <= last and a[r] <= last:
        break
    if (a[r] > last and a[l] > a[r]) or (a[l] <= last and a[r] > last):
        res.append("R")
        last = a[r]
        r -= 1
    elif (a[l] > last and a[r] > a[l]) or (a[r] <= last and a[l] > last):
        res.append("L")
        last = a[l]
        l += 1
    else:
        l_max = l
        l_prev = last
        while l_max < r + 1 and a[l_max] > l_prev:
            l_prev = a[l_max]
            l_max += 1
        l_count = l_max - l

        r_max = r
        r_prev = last
        while r_max > l - 1 and a[r_max] > r_prev:
            r_prev = a[r_max]
            r_max -= 1
        r_count = r - r_max

        if l_count > r_count:
            res.append("L" * l_count)
        else:
            res.append("R" * r_count)
        break

res = "".join(res)
print(len(res))
print(res)
