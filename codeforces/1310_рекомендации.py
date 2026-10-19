par = {}


def make_set(x):
    if x not in par:
        par[x] = x

def find_set(x: int) -> int:
    if par[x] == x:
        return x

    y = find_set(par[x])
    par[x] = y
    return y

def union_sets(x: int, y: int) -> None:
    x = find_set(x)
    y = find_set(y)

    if x > y:
        x, y = y, x

    par[x] = y


n = int(input())
amount = list(map(int, input().split()))
time = list(map(int, input().split()))

arr = sorted(zip(amount, time), key=lambda x: x[1], reverse=True)

res = 0
for a, t in arr:
    make_set(a)
    res += t * (find_set(a) - a)
    make_set(find_set(a) + 1)
    union_sets(find_set(a), find_set(a) + 1)

print(res)
