def solve(n, op, cl, k, s, cur):
    if op + cl == 2 * n:
        print(s)
        return

    if op < n and cur < k:
        solve(n, op + 1, cl, k, s + "(", cur + 1)
    if cl < op:
        solve(n, op, cl + 1, k, s + ")", cur - 1)


n, k = map(int, input().split())
solve(n, 0, 0, k, "", 0)
