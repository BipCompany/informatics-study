n = input()

lst = int(n[-1])

if lst & 1:
    print(len(n) - 1)
else:
    even = 0

    for i in range(len(n) - 1):
        if not (int(n[i]) & 1):
            even += 1

    print(len(n) - 1 + even)
