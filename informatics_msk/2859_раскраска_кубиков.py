n = int(input())
a = list(map(int, input().split()))
v = [a[0]]
n = 1
s = [1]

for i in a[1:]:
    l = -1
    r = n - 1
    while r - l > 1:
        m = l + (r - l) // 2
        if v[m] < i:
            r = m
        else:
            l = m
    if v[r] < i:
        v[r] = i
        s.append(r + 1)
    else:
        v.append(i)
        n += 1
        s.append(n)

print(n)
print(*s)
