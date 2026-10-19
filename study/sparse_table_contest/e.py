n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

dp = [0] * (n + 1)
for i in range(2, n + 1):
    dp[i] = dp[i // 2] + 1

mx = [[0] * n for _ in range(dp[n] + 1)]
mn = [[0] * n for _ in range(dp[n] + 1)]

for i in range(n):
    mx[0][i] = a[i]
    mn[0][i] = b[i]

for i in range(1, dp[n] + 1):
    for j in range(n - (1 << i) + 1):
        mx[i][j] = max(mx[i - 1][j], mx[i - 1][j + (1 << (i - 1))])
        mn[i][j] = min(mn[i - 1][j], mn[i - 1][j + (1 << (i - 1))])

res = 0

for i in range(n):
    for j in range(i, n):
        ln = dp[j - i + 1]
        mxcur = max(mx[ln][i], mx[ln][j - (1 << ln) + 1])
        mncur = min(mn[ln][i], mn[ln][j - (1 << ln) + 1])
        if mxcur == mncur:
            res += 1

print(res)
