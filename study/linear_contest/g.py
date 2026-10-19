n, k = map(int, input().split())
a = list(map(int, input().split()))

cur = []
back = []
mn = 1000000001
res = []
for i in range(n):
    cur.append(a[i])
    mn = min(a[i], mn)
    if i >= k - 1:
        if not back:
            while cur:
                back.append(min(back[-1] if back else 1000000001, cur.pop()))
            mn = 1000000001
        res.append(min(back.pop(), mn))

print(*res)
