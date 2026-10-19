from math import gcd, log2


n, q = map(int, input().split())
a = list(map(int, input().split()))

st = [[0] * n for _ in range(int(log2(n) + 1))]

for i in range(n):
    st[0][i] = a[i]

for i in range(1, int(log2(n) + 1)):
    for j in range(n - (1 << (i)) + 1):
        st[i][j] = gcd(st[i-1][j], st[i-1][j + (1 << i-1)])

for _ in range(q):
    l, r, k = map(int, input().split())

    ln = int(log2(r - l + 1))
    x = gcd(st[ln][l - 1], st[ln][r - (1 << ln)])
    if x % k == 0:
        print("YES")
    else:
        print("NO")
