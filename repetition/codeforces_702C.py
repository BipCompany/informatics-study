n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

v = 0
res = 0

for i in a:
  while v < len(b) - 1 and abs(i - b[v]) >= abs(i - b[v + 1]):
    v += 1
  res = max(res, abs(b[v] - i))

print(res)
