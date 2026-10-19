n, q = map(int, input().split())

p = [0]

s = 0
for i in map(int, input().split()):
    if i == 1:
        s += 1
    p.append(s)

for _ in range(q):
    l, r = map(int, input().split())

    if (r - l + 1) % 2 != 0 or p[r] - p[l - 1] != (r - l + 1) // 2:
        print("NO")
    else:
        print("YES")
