m, n = map(int, input().split())

a = list(map(int, input().split()))
b = list(map(int, input().split()))
aa = {}
for i in range(m):
    if a[i] in aa:
        aa[a[i]].append(i + 1)
    else:
        aa[a[i]] = [i + 1]
a.sort()
bb = {}
for i in range(n):
    if b[i] in bb:
        bb[b[i]].append(i + 1)
    else:
        bb[b[i]] = [i + 1]
b.sort()
trio_buffer = []


def can(d):
    trio_buffer.clear()
    c = 0
    j = -1
    for i in range(d):
        e1 = b[i]
        e2 = b[n - d + i]
        while j < m - 1:
            j += 1
            if e1 < a[j] < e2:
                trio_buffer.append((a[j], e1, e2))
                c += 1
                break
    if c >= d:
        return True

    return False


l = 0
r = min(m, n // 2) + 1
while r - l > 1:
    d = l + (r - l) // 2
    if can(d):
        l = d
    else:
        r = d
can(l)

print(l)
for d, e1, e2 in trio_buffer:
    dn = aa[d].pop()
    e1n = bb[e1].pop()
    e2n = bb[e2].pop()
    print(dn, e1n, e2n)
