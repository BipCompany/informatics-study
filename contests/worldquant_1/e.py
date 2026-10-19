import heapq



def solve():
    n, k = map(int, input().split())
    s = input()

    pref = [0]
    mpref = [0]
    sz = []
    m = 0
    mx = 0
    cur = 0
    mcur = 0
    for i in range(n):
        if s[i] == '(':
            cur += 1
            if mcur:
                mpref.append(mpref[-1] + mcur)
                mcur = 0
        elif s[i] == ')':
            if cur:
                pref.append(pref[-1] + cur)
                mx = max(mx, cur)
                sz.append(cur)
                cur = 0
            mcur += 1
    mpref.append(mpref[-1] + mcur)

    mx = max(mx, min(k, n // 2 - pref[1]))
    for i in range(len(sz)):
        if mpref[i] <= k:
            mx = max(mx, mpref[i] + sz[i])

    print(mx)


t = int(input())
for _ in range(t):
    solve()

# cur = 0
# st = 0
# fn = 0
# f = True
# for i in range(n):
#     if s[i] == ')' and cur:
#         if f:
#             f = False
#         mx = max(mx, cur)
#         cur = 0
#     elif s[i] == '(':
#         cur += 1
#         if f:
#             st += 1
#         else:
#             fn += 1
#
# st += min(k, fn)
# print(max(st, mx))
