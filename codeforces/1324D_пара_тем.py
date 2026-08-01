n = int(input())

lec = [i - j for i, j in zip(map(int, input().split()), map(int, input().split()))]
lec.sort()

l = 0
r = n - 1
res = 0
while r - l > 0:
    while l < r and lec[l] + lec[r] <= 0:
        l += 1
    res += r - l
    r -= 1
print(res)
