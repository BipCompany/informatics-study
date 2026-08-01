def main():
    n = int(input())
    m = map(int, input().split())
    a = []
    b = []

    for i in m:
        a.append(i)
        b.append(i)
    b.sort()

    cs = 0
    ce = n - 1
    while cs < n and a[cs] == b[cs]:
        cs += 1
    while ce >= 0 and a[ce] == b[ce]:
        ce -= 1

    if cs >= n - 1 and ce <= 0:
        print("yes")
        print("1 1")
        return

    if cs != 0:
        bs = b[ce : cs - 1 : -1]
    else:
        bs = b[ce::-1]
    if a[cs : ce + 1] == bs:
        print("yes")
        print(cs + 1, ce + 1)
    else:
        print("no")


main()
