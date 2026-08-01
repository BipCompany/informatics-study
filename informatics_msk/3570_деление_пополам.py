x = float(input())
n = int(input())

l = 0
r = 1000
for i in range(100):
    m = l + (r - l) / 2
    if m**n >= x:
        r = m
    else:
        l = m
print(l + (r - l) / 2)
