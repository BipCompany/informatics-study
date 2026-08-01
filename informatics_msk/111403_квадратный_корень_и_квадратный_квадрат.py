c = float(input())

l = 1
r = 100000

for i in range(100):
    m = l + (r - l) / 2
    if m**2 + m**0.5 >= c:
        r = m
    else:
        l = m
print(l + (r - l) / 2)
