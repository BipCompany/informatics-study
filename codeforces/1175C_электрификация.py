def main():
    n, k = map(int, input().split())
    a = sorted(map(int, input().split()))
    mn = 1e9
    mn_x = -1
    for r in range(k, n):
        l = r - k
        m = a[l] + (a[r] - a[l]) // 2
        if mn > a[r] - m:
            mn = a[r] - m
            mn_x = m
    print(mn_x)


t = int(input())
for i in range(t):
    main()
