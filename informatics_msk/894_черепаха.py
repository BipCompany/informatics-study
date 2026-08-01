import math

v, d = map(int, input().split())
n = int(input())

a = []
for i in range(n):
    x, hhmm = input().split()
    x = int(x)
    h, m = map(int, hhmm.split(":"))
    t = h * 60 + m
    a.append((x, t))

a.sort()

ct = 0
cx = 0
for x, t in a:
    walk_t = (x - cx) / v
    ct = max(t, ct + walk_t) + d
    cx = x

ct += cx / v
ct = math.ceil(ct)

h = ct // 60 % 24
m = ct % 60
print(f"{h:02}:{m:02}")
