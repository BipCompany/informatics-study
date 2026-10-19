#include <iostream>
#include <vector>

using namespace std;
vector<int> par;

int find_set(int x) {
    if (par[x] == x) return x;

    return par[x] = find_set(par[x]);
}

void union_sets(int x, int y) {
    x = find_set(x);
    y = find_set(y);

    if (x < y) swap(x, y);
    par[y] = x;
}

int main() {
    int n, m;
    cin >> n >> m;
    par.resize(n + 1);
    for (int i = 1; i <= n; i++) par[i] = i;

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        union_sets(x, y);
    }

    int l = 1, r, res = 0;
    while (l <= n) {
        while (l <= n and par[l] == l) ++l;
        if (l > n) break;
        r = find_set(l);
        ++l;
        while (l <= r) {
            if (find_set(l) != r) {
                union_sets(r, find_set(l));
                r = find_set(r);
                ++res;
            }
            ++l;
        }
    }
    cout << res;
}
