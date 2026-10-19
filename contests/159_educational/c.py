t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    cnt = [0] * k
    s = [0]
    r = 0
    for i in range(n):
        s.append((s[-1] + a[i]) % k)
        if i >= k:
            cnt[s[i - k]] += 1
        r += cnt[s[-1]]
    print(r)
