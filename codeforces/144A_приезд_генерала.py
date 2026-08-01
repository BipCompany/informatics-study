n = int(input())
a = list(map(int, input().split()))

mn = min(a)
mx = max(a)
mn_ind = a[::-1].index(mn)  # с другого конца, но нам в формуле так и надо
mx_ind = a.index(mx)
t = mx_ind + mn_ind
if mx_ind + mn_ind + 2 > n:
    t -= 1

print(t)
