from collections import deque


n = int(input())
l, r = deque(), deque()
k = 0

for _ in range(n):
    op, *arg = input().split()
    if op == 'push_front':
        x = int(arg[0])
        l.appendleft(x)
        if not k & 1:
            r.appendleft(l.pop())
        k += 1
    elif op == 'push_middle':
        x = int(arg[0])
        if k & 1:
            l.append(x)
        else:
            r.appendleft(x)
        k += 1
    elif op == 'push_back':
        x = int(arg[0])
        r.append(x)
        if k & 1:
            l.append(r.popleft())
        k += 1
    elif op == 'pop_front':
        if k == 1:
            r.pop()
        else:
            l.popleft()
            if k & 1:
                l.append(r.popleft())
        k -= 1
    elif op == 'pop_back':
        r.pop()
        if not k & 1:
            r.appendleft(l.pop())
        k -= 1
    else:
        if k & 1:
            r.popleft()
        else:
            l.pop()
        k -= 1

print(len(l) + len(r))
print(*l, end=' ')
print(*r)
