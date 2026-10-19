def check(m, a, k):
    c = 1
    cur = 0
    for i in a:
        if cur + i > m:
            cur = 0
            c += 1
        cur += i
        if c > k or i > m:
            return False

    return not(c > k)

n = int(input())
a = list(map(int, input().split()))
k = int(input())

l = 1
r = sum(a)

while r - l > 1:
    m = l + (r - l) // 2
    if check(m, a ,k):
        r = m
    else:
        l = m

print(r)
