def generate(t):
    global n
    global a
    if t == n - 1:
        print(*a)
    else:
        for j in range(t, n):
            a[t], a[j] = a[j], a[t]
            t += 1
            generate(t)
            t -= 1
            a[t], a[j] = a[j], a[t]


n = 4
t = 0
a = [i for i in range(1, n + 1)]
generate(t)
