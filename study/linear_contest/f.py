n = int(input())
a = list(map(int, input().split()))

stack = []

res = []
for i in range(n):
    while stack and a[stack[-1]] >= a[i]:
        stack.pop()
    if not stack:
        res.append(0)
    else:
        res.append(stack[-1] + 1)
    stack.append(i)

print(*res)
