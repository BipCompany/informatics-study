
from collections import deque


n = int(input())
a = list(map(int, input().split()))

dist = [1000000000] * n
dist[0] = 0

q = deque()
q.append(0)

cnt = 0
f = False
while q:
    cur = q.popleft()
    for i in range(cur + 1, cur + a[cur] + 1):
        if i < n:
            if dist[cur] + 1 < dist[i]:
                dist[i] = dist[cur] + 1
                if i == n - 1:
                    cnt = 1
                    f = True
                q.append(i)
            elif dist[cur] + 1 == dist[i]:
                if i == n - 1:
                    cnt += 1
                    cnt %= 1000000007
                q.append(i)

print(cnt if f else -1)
