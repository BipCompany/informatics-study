n = int(input())
a = []
for i in range(n):
    dur, dead = map(int, input().split())
    a.append((dur, dead))

a.sort()

c = 0
r = 0
for dur, dead in a:
    c += dur
    r += dead - c

print(r)
