#include <iostream>
#include <vector>

using namespace std;
vector<int> par, ranks, weight;

int find_set(int x) {
    if (par[x] == x) return x;
    return par[x] = find_set(par[x]);
}

void union_sets(int x, int y, int w) {
    x = find_set(x);
    y = find_set(y);

    if (x == y) {
        weight[x] += w;
        return;
    }

    if (ranks[x] < ranks[y]) swap(x, y);
    par[y] = x;
    weight[x] += weight[y] + w;
    if (ranks[x] == ranks[y]) ++ranks[x];
}

int main() {
    int n, m;
    cin >> n >> m;
    par.resize(n + 1);
    ranks.resize(n + 1);
    weight.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        par[i] = i;
    }

    for (int i = 0; i < m; i++) {
        int op;
        cin >> op;
        if (op == 1) {
            int x, y, w;
            cin >> x >> y >> w;
            union_sets(x, y, w);
        }
        else {
            int x;
            cin >> x;
            cout << weight[find_set(x)] << endl;
        }
    }
}
