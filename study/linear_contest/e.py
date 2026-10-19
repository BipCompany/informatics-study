n = int(input())
a = list(map(int, input().split()))

res = 0
for i in range(n):
    idx = a[i] - 1
    while idx != i:
        a[i], a[idx] = a[idx], a[i]
        res += 1
        idx = a[i] - 1

print(res)
