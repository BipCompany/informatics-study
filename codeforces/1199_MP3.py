from collections import Counter


def find_k(x):
    k = 0
    while 2**k < x:
        k += 1

    return k


n, I = map(int, input().split())
a = list(map(int, input().split()))
d = Counter(a)
a = sorted(d.keys())

max_k = (I * 8) // n

if max_k > 30:
    K = len(a)
else:
    K = min(1 << max_k, len(a))

cur = 0
for i in range(K):
    cur += d[a[i]]

res = n - cur
for i in range(K, len(a)):
    cur += d[a[i]]
    cur -= d[a[i - K]]
    res = min(res, n - cur)

print(res)
