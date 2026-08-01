n = int(input())
a = list(map(int, input().split()))

a.sort()

t = 0
c = 0

for i in a:
    if i >= t:
        c += 1
        t += i

print(c)
