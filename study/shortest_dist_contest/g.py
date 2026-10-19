import heapq
import sys

sys.stdin = open("distance.in", "r")
sys.stdout = open("distance.out", "w")

data = iter(map(int, sys.stdin.read().split()))
n = int(next(data))
m = int(next(data))
s = int(next(data)) - 1
f = int(next(data)) - 1

g = [[] for _ in range(n)]
for i in range(m):
    a = int(next(data)) - 1
    b = int(next(data)) - 1
    w = int(next(data))
    g[a].append((w, b))
    g[b].append((w, a))

heap = [(0, s)]
dist = [10000000000] * n
dist[s] = 0
path = [-1] * n

while heap:
    d, cur = heapq.heappop(heap)

    if d > dist[cur]:
        continue

    for w, i in g[cur]:
        if dist[i] > dist[cur] + w:
            dist[i] = dist[cur] + w
            path[i] = cur
            heapq.heappush(heap, (dist[i], i))

p = [f + 1]
c = f
while path[c] != -1:
    p.append(path[c] + 1)
    c = path[c]

if dist[f] == 10000000000:
    print(-1)
else:
    print(dist[f])
    print(*p[::-1])
# with open("distance.out", "w") as file:
#     if dist[f] == 10000000000:
#         file.write("-1")
#     else:
#         file.write(f"{dist[f]}\n{' '.join(map(str, p[::-1]))}\n")
