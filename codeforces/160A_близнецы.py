def main():
    n = int(input())
    a = sorted(map(int, input().split()))

    if n == 1:
        print(1)
        return

    s1 = sum(a)
    s2 = 0

    c = n

    while s1 >= s2:
        c -= 1
        s1 -= a[c]
        s2 += a[c]

    print(n - c)


main()
