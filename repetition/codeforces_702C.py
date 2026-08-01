n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

j = 0
r = 0
for i in a:
    while j < m - 1 and abs(i - b[j]) >= abs(i - b[j + 1]):
        j += 1
    r = max(r, abs(i - b[j]))

print(r)
