t = int(input())

for _ in range(t):
    s = input()
    n = len(s)
    ozo = 0
    ooo = 0
    for i in range(1, n - 1):
        if s[i - 1] == s[i] == s[i + 1]:
            ooo = 1
        if s[i - 1] != s[i] and s[i + 1] != s[i]:
            ozo = 1
    print(1 + ozo + ooo)
