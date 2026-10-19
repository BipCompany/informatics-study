from collections import deque


n, m, x1, y1 = map(int, input().split())

g = [[2] * (m + 2) for _ in range(n + 2)]

for i in range(1, n + 1):
    a = input()
    for j in range(m):
        g[i][j + 1] = int(a[j])

q = deque()
q.append((x1, y1))
dist = [[1000000000] * (m + 2) for _ in range(n + 2)]
dist[x1][y1] = 0
path = [[(x1, y1)] * (m + 2) for _ in range(n + 2)]
res = 1000000000
res_path = ()

while q:
    xa = (1, -1, 0, 0)
    ya = (0, 0, 1, -1)
    x, y = q.popleft()

    for i in range(4):
        if g[x + xa[i]][y + ya[i]] == 2 and res > dist[x][y] + 1:
            res = dist[x][y] + 1
            res_path = (x, y)
        elif g[x + xa[i]][y + ya[i]] == 0 and dist[x + xa[i]][y + ya[i]] > dist[x][y] + 1:
            q.append((x + xa[i], y + ya[i]))
            dist[x + xa[i]][y + ya[i]] = dist[x][y] + 1
            path[x + xa[i]][y + ya[i]] = (x, y)

if not res_path:
    print(-1)
else:
    a = [res_path]
    xc, yc = res_path
    while (xc, yc) != path[xc][yc]:
        xc, yc = path[xc][yc]
        a.append((xc, yc))

    print(len(a))
    for i in a[::-1]:
        print(*i)
