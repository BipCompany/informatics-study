import sys


def solve():
    data = list(map(int, sys.stdin.buffer.read().split()))
    it = iter(data)
    t = next(it)
    out = []

    for _ in range(t):
        n = next(it)
        m = next(it)
        k = next(it)
        a = [next(it) for _ in range(n)]
        b = [next(it) for _ in range(m)]

        # Координатное сжатие: собираем все уникальные числа
        uniq = sorted(set(a + b))
        comp = {v: i for i, v in enumerate(uniq)}

        # Размерность: количество уникальных чисел ≤ n+m
        size = len(uniq)
        need = [0] * size  # сколько ещё нужно (аналог todo)
        have = [0] * size  # сколько "хороших" сейчас в окне (done)
        extra = [0] * size  # сколько лишних в окне

        for val in b:
            need[comp[val]] += 1

        cur_match = 0
        # Первое окно
        for i in range(m):
            idx = comp[a[i]]
            if need[idx] > 0:
                need[idx] -= 1
                have[idx] += 1
                cur_match += 1
            else:
                extra[idx] += 1

        ans = 1 if cur_match >= k else 0

        # Скользящее окно
        for r in range(m, n):
            l_idx = comp[a[r - m]]
            # Убираем левый элемент
            if extra[l_idx] > 0:
                extra[l_idx] -= 1
            else:
                have[l_idx] -= 1
                cur_match -= 1
                need[l_idx] += 1

            r_idx = comp[a[r]]
            # Добавляем правый
            if need[r_idx] > 0:
                need[r_idx] -= 1
                have[r_idx] += 1
                cur_match += 1
            else:
                extra[r_idx] += 1

            if cur_match >= k:
                ans += 1

        out.append(str(ans))

    sys.stdout.write("\n".join(out))


if __name__ == "__main__":
    solve()
