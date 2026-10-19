n = int(input())
arr = []
for i in range(n):
    a, b = input().split()
    h1, m1 = map(int, a.split(':'))
    h2, m2 = map(int, b.split(':'))
    arr.append((h1 * 60 + m1, -1))
    arr.append((h2 * 60 + m2, 1))

arr.sort()

cur = 0
mx = 0
for i, j in arr:
    cur -= j
    mx = max(mx, cur)

print(mx)

# for i, j in arr:
#     print(i // 60, i % 60, j)
