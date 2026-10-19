n = int(input())
arr = []
for i in range(n):
    a, b = map(int, input().split())
    arr.append((a, 1))
    arr.append((b, -1))

arr.sort()

cur = 0
mx = 0
for i, j in arr:
    cur += j
    mx = max(mx, cur)

print(arr)

print(mx)
