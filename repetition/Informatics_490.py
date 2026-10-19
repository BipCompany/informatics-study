n, x, y = map(int, input().split())


def can(t):
  a, b = min(x, y), max(x, y)
  
  if (t - a) // a + (t - a) // b >= n - 1:
    return True

  return False


l = 0
r = n * max(x, y)

while r - l > 1:
  m = l + (r - l) // 2
  if can(m):
    r = m
  else:
    l = m

print(r)
  