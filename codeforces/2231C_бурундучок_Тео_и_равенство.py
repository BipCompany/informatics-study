def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    mn = a[0]
    b = mn & 1
    f = False
    c = 0
    while not f:
        f = True
        for i in range(n):
            if a[i] & 1 != b:
                if a[i] & 1 == 1:
                    a[i] += 1
                    if i == 0:
                        mn += 1
                    c += 1
                elif a[i] // 2 >= mn:
                    a[i] //= 2
                    c += 1
            if a[i] != mn:
                f = False
        b = b ^ 1
    print(c)


n = int(input())

for i in range(n):
    solve()
