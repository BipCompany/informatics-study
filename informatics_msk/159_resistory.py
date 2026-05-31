import sys


def solve() -> None:
    data = sys.stdin.read().strip().split()
    if not data:
        return
    n = int(data[0])
    C = float(data[1])
    caps = [float(x) for x in data[2 : 2 + n]]

    # dp[mask] — множество всех ёмкостей, которые можно получить,
    # используя в точности конденсаторы, соответствующие битам mask
    dp = [set() for _ in range(1 << n)]

    # базовый случай: один конденсатор
    for i in range(n):
        dp[1 << i].add(caps[i])

    # перебираем все непустые подмножества
    for mask in range(1, 1 << n):
        if mask & (mask - 1) == 0:  # только один конденсатор — уже посчитано
            continue
        lsb = mask & -mask  # младший бит (чтобы не учитывать симметричные разбиения)
        sub = (mask - 1) & mask
        while sub:
            if sub & lsb:  # подмножество содержит младший бит
                other = mask ^ sub  # оставшиеся конденсаторы
                s = dp[mask]
                for a in dp[sub]:
                    for b in dp[other]:
                        # параллельное соединение
                        s.add(a + b)
                        # последовательное соединение
                        s.add((a * b) / (a + b))
            sub = (sub - 1) & mask

    # ищем значение, ближайшее к C
    best_val = None
    best_diff = float("inf")
    for mask in range(1, 1 << n):
        for val in dp[mask]:
            diff = abs(val - C)
            if diff < best_diff:
                best_diff = diff
                best_val = val

    # выводим с шестью знаками после запятой
    print(f"{best_val:.6f}")


if __name__ == "__main__":
    solve()
