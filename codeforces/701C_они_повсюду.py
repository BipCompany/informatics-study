n = int(input())
s = input()
b = {char: 0 for char in set(s)}

l = 0
b[s[l]] += 1
mx = n
for r in range(1, n):
    b[s[r]] += 1
    while b[s[l]] > 1:
        b[s[l]] -= 1
        l += 1

    if all(b.values()) and r - l + 1 < mx:
        mx = r - l + 1

print(mx)
