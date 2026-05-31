n = int(input())
a = list(map(int, input().split()))

for i in range((1 << n)):
    gc = i ^ (i >> 1)
    cur = []
    for j in range(n):
        if gc & (1 << (n - j - 1)):
            cur.append(a[j])
        else:
            cur.append(0)
    print(*cur)
