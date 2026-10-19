#include <iostream>
#include <algorithm>

using namespace std;

int ranks[101], par[101], amount[101];

int find_set(int x) {
    if (par[x] == x) return x;

    return par[x] = find_set(par[x]);
}

void union_sets(int x, int y) {
    x = find_set(x);
    y = find_set(y);

    if (x == y) return;

    if (ranks[x] < ranks[y]) swap(x, y);

    par[x] = y;
    amount[y] += amount[x];
    if (ranks[x] == ranks[y]) ranks[y]++;
}

int main() {
    fill(amount, amount + 101, 1);
    int n, s;
    cin >> n >> s;
    for (int i = 1; i < n + 1; i++) {
        par[i] = i;
    }
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            int is;
            cin >> is;
            if (is) union_sets(i, j);
        }
    }

    cout << amount[find_set(s)] - 1;
}
