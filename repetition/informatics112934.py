def solve(s, op, cl, p):
  if op + cl == 2 * p:
    print(s)
    return
  if op < p:
    solve(s + "(", op + 1, cl, p)
  if cl < op:
    solve(s + ")", op, cl + 1, p)


n = int(input())

solve("", 0, 0, n)