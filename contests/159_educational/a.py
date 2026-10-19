t = int(input())

for i in range(t):
    a, b = map(int, input().split())
    if a <= b:
        print(-1)
    else:
        c = 0
        while a > b and a and b:
            a -= 2
            b -= 1
            c += 1
        print(c)
