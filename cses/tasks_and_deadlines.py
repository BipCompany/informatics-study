n = int(input())

a = []
for i in range(n):
    dur, dead = map(int, input().split())
    a.append((dur, dead))

a.sort()

t = 0
r = 0

for dur, dead in a:
    t += dur
    r += dead - t

print(r)
