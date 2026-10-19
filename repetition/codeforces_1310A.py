par = {}


def make_set(x):
    if x in par:
        return

    par[x] = x

def find_set(x):
    if par[x] == x:
        return x

    y = find_set(par[x])
    par[x] = y
    return y

def union_sets(x, y):
    x = find_set(x)
    y = find_set(y)

    if x == y:
        return

    if x > y:
        y, x == x, y

    par[x] = y

n = int(input())
a = map(int, input().split())
b = map(int, input().split())

arr = sorted(zip(a, b), key=lambda x: x[1], reverse=True)

t = 0
for i, j in arr:
    make_set(i)
    y = find_set(i)
    t += (y - i) * j
    make_set(y + 1)
    union_sets(y, y + 1)

print(t)
