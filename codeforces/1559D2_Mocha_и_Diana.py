n, m1, m2 = map(int, input().split())

par1 = [i for i in range(n + 1)]
rank1 = [0 for i in range(n + 1)]
par2 = [i for i in range(n + 1)]
rank2 = [0 for i in range(n + 1)]


def find_set1(x):
    if par1[x] == x:
        return x

    y = find_set1(par1[x])
    par1[x] = y
    return y

def union_sets1(x, y):
    x = find_set1(x)
    y = find_set1(y)

    if rank1[x] < rank1[y]:
        x, y = y, x

    par1[y] = x
    if rank1[x] == rank1[y]:
        rank1[x] += 1

def find_set2(x):
    if par2[x] == x:
        return x

    y = find_set2(par2[x])
    par2[x] = y
    return y

def union_sets2(x, y):
    x = find_set2(x)
    y = find_set2(y)

    if rank2[x] < rank2[y]:
        x, y = y, x

    par2[y] = x
    if rank2[x] == rank2[y]:
        rank2[x] += 1


for _ in range(m1):
    union_sets1(*list(map(int, input().split())))

for _ in range(m2):
    union_sets2(*list(map(int, input().split())))

a, b = [], []
res = []

for i in range(2, n + 1):
    if find_set1(1) != find_set1(i) and find_set2(1) != find_set2(i):
        union_sets1(1, i)
        union_sets2(1, i)
        res.append((1, i))
    elif find_set1(1) != find_set1(i) and find_set2(1) == find_set2(i):
        a.append(i)
    elif find_set1(1) == find_set1(i) and find_set2(1) != find_set2(i):
        b.append(i)

while a and b:
    while a and find_set1(a[-1]) == find_set1(1):
        a.pop()
    while b and find_set2(b[-1]) == find_set2(1):
        b.pop()

    if not a or not b:
        break

    i = a[-1]
    j = b[-1]

    union_sets1(i, j)
    union_sets2(i, j)
    res.append((i, j))


print(len(res))
for i in res:
    print(*i)
