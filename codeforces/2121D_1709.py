def solve():
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    to_print = []
    for i in range(n):
        f = True
        for j in range(n - 1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                to_print.append(f"1 {j + 1}")
                f = False
            if b[j] > b[j + 1]:
                b[j], b[j + 1] = b[j + 1], b[j]
                to_print.append(f"2 {j + 1}")
                f = False
        if f:
            break
    for i in range(n):
        if a[i] > b[i]:
            to_print.append(f"3 {i + 1}")
    print(len(to_print), *to_print, sep="\n")


n = int(input())
for i in range(n):
    solve()
