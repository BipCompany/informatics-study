n = int(input())

a = []

for i in range(n):
    come, leave = map(int, input().split())
    a.append((come, 1))
    a.append((leave, -1))

a.sort(key=lambda x: x[0])

mx = 0
curr = 0

for i in range(2 * n):
    t, ppl = a[i]
    curr += ppl
    if ppl == 1 and curr > mx:
        mx = curr

print(mx)
