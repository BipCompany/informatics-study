import heapq

n = int(input())
a = map(int, input().split())

heap = []

res = 0
for i in a:
    heapq.heappush(heap, -i)
    if i < -heap[0]:
        res += -heap[0] - i
        heapq.heappop(heap)
        heapq.heappush(heap, -i)

print(res)
