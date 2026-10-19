a = input()
n = len(a)
b = input()
k = len(b)


d = [n] * (n + 1)
for i, j in enumerate(map(int, input().split())):
    d[j] = i + 1

def check(m):
    j = 0
    for i in range(n):
        if d[i + 1] > m and a[i] == b[j]:
           j += 1
           if j == k:
               break

    return j == k


l = 0
r = n + 1
while r - l > 1:
    m = l + (r - l) // 2
    if check(m):
        l = m
    else:
        r = m

print(l)
