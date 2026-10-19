n = int(input())
a = list(map(int, input().split()))

stack = []
l = [-1] * n
r = [n] * n

for i in range(n):
    while stack and a[stack[-1]] >= a[i]:
        stack.pop()
    l[i] = stack[-1] if stack else -1
    stack.append(i)

stack.clear()

for i in range(n-1, -1, -1):
    while stack and a[stack[-1]] > a[i]:
        stack.pop()
    r[i] = stack[-1] if stack else n
    stack.append(i)

s = 0
for i in range(n):
    s += a[i] * (i - l[i]) * (r[i] - i)

print(s)
