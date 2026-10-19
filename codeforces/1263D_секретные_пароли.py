lat = "abcdefghijklmnopqrstuvwxyz"
par = {}
ranks = {}


def make_set(x: str) -> None:
    if x not in par:
        par[x] = x
        ranks[x] = 0

def find_set(x: str) -> str:
    if par[x] == x:
        return x

    y = find_set(par[x])
    par[x] = y
    return y

def union_sets(x: str, y: str) -> None:
    x = find_set(x)
    y = find_set(y)

    if x == y:
        return

    if ranks[x] < ranks[y]:
        x, y = y, x
    par[y] = x
    if ranks[y] == ranks[x]:
        ranks[x] += 1

n = int(input())
for _ in range(n):
    w = input()
    for i in w:
        make_set(i)
    for i in range(len(w) - 1):
        union_sets(w[i], w[i + 1])

s = set()
res = 0
for i in lat:
    if i in par and find_set(i) not in s:
        res += 1
        s.add(find_set(i))

print(res)
