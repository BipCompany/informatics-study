n = int(input())
a = list(map(int, input().split()))

mn = min(a)
mx = max(a)

mxind = n - 1
mnind = 0

for i in range(n - 1, -1, -1):
    if a[i] == mn:
        mnind = i
        break
for i in range(n):
    if a[i] == mx:
        mxind = i
        break

r = mxind + n - 1 - mnind
if mnind < mxind:
    r -= 1

print(r)
