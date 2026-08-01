n = int(input())
a = sorted(map(int, input().split()), reverse=True)
s = sum(a)
s2 = 0
c = 0

for i in a:
    s -= i
    s2 += i
    c += 1
    if s < s2:
        break

print(c)
