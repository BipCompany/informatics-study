def solve():
    n = int(input())
    a = []
    used = {}
    iterated = [0] * n
    for i in range(n):
        l, *ppl = map(int, input().split())
        q = []
        qs = set()
        for j in ppl[::-1]:
            if j not in qs:
                q.append(j)
                qs.add(j)
            if j not in used:
                used[j] = 0
        a.append(q)

    q = []
    for i in range(n):
        cur = 0
        for j in range(n):
            if not iterated[j]:
                if iterated[cur]:
                    cur = j
                elif a[j] < a[cur]:
                    cur = j

        iterated[cur] = 1
        for j in a[cur]:
            q.append(j)
            used[j] = 1

            for k in range(n):
                if not iterated[k]:
                    nw = []
                    for x in a[k]:
                        if not used[x]:
                            nw.append(x)
                    a[k] = nw

    print(*q)


t = int(input())

for i in range(t):
    solve()
