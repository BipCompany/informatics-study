n = int(input())
a = int(input())
b = int(input())

if a + b < n:
    print(0)
else:
    b1 = n - min(n, a)
    b2 = min(n, b)
    print(b2 - b1 + 1)
