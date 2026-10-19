#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, q, MX_SZ = 333;
    cin >> n >> m >> q;

    vector<long long> tmp(n);
    vector<long long> a(n, 0);
    vector<long long> add(n, 0);
    for (int i = 0; i < n; i++) cin >> tmp[i];

    vector<vector<int>> g(n, vector<int>());
    vector<int> sz(n, 0);
    for (int i = 0; i < m; i++) {
        int ac, b;
        cin >> ac >> b;

        g[ac - 1].push_back(b - 1);
        g[b - 1].push_back(ac - 1);

        a[ac - 1] += tmp[b - 1];
        a[b - 1] += tmp[ac - 1];

        sz[ac - 1]++;
        sz[b - 1]++;
    }

    vector<vector<int>> h(n, vector<int>());
    for (int i = 0; i < n; i++) {
        if (sz[i] > MX_SZ) for (int j: g[i]) h[j].push_back(i);
    }

    for (int qu = 0; qu < q; qu++) {
        int op, i;
        long long x;
        cin >> op >> i;
        i--;
        // cout << qu << ' ' << op << '\n';

        if (op == 1) {
            cin >> x;

            if (sz[i] < MX_SZ) for (int j: g[i]) a[j] += x;
            else add[i] += x;
        }
        else {
            long long res = a[i];
            for (int j: h[i]) res += add[j];

            cout << res << '\n';
        }
    }
}
