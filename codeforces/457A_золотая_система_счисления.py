from math import sqrt

a = str(input())
b = str(input())

last = 0
cur = 1

o1, o2, q1, q2 = 0, 0, 0, 0

l1 = len(a)
l2 = len(b)

if a[-1] == "1":
    o1 += 1

if b[-1] == "1":
    o2 += 1

for i in range(1, max(l1, l2)):
    if l1 - 1 - i >= 0 and a[l1 - i - 1] == "1":
        q1 += cur
        o1 += last

    if l2 - 1 - i >= 0 and b[l2 - i - 1] == "1":
        q2 += cur
        o2 += last

    last, cur = cur, last + cur

ans = (sqrt(5) + 1) / 2 * (q1 - q2) + o1 - o2

if ans > 0:
    print(">")
elif ans < 0:
    print("<")
else:
    print("=")
