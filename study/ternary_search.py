# тернарный поиск для параболы
a, b, c = map(float, input().split())


def f(x):
    return a * x * x + b * x + c


l = -1000
r = 1000
for i in range(100):
    m1 = l + (r - l) / 3
    m2 = r - (r - l) / 3
    if f(m1) < f(m2):
        r = m2
    elif f(m1) > f(m2):
        l = m1
    else:
        l = m1
        r = m2
print((l + r) / 2)
