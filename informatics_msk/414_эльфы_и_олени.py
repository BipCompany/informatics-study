def can(m):
    global a, b, n, k, can_buffer
    j = -1
    c = 0
    can_buffer = []
    for i in range(m):
        while j < n - 1:
            j += 1
            if b[i] < a[j] < b[k - m + i]:
                c += 1
                can_buffer.append(a[j])
                break
    if c >= m:
        return can_buffer
    return []


n, k = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
an = {}
for i in range(n):
    if a[i] in an:
        an[a[i]].append(i + 1)
    else:
        an[a[i]] = [i + 1]
a.sort()
bn = {}
for i in range(k):
    if b[i] in bn:
        bn[b[i]].append(i + 1)
    else:
        bn[b[i]] = [i + 1]
b.sort()

l = 0
r = min(n, k // 2)
res = []
while l < r:
    m = l + (r - l + 1) // 2
    if can(m):
        l = m
    else:
        r = m - 1

can(l)
print(len(can_buffer))
for i in range(len(can_buffer)):
    print(an[can_buffer[i]].pop(), bn[b[i]].pop(), bn[b[k - l + i]].pop())
