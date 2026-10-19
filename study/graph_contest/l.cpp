#include <functional>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    vector<int> sz(n, 1);

    int mx = 0;
    int centr = 0;

    function<void(int, int)> dfs_sz = [&](int cur, int prev) {

        for (int i: g[cur]) if (i != prev) {
            dfs_sz(i, cur);
            sz[cur] += sz[i];
            mx = max(mx, sz[i]);
        }

        mx = max(mx, n - sz[cur]);
        if (mx <= n / 2) centr = cur;
    };

    dfs_sz(0, -1);

    vector<int> col(n, 2);
    col[centr] = 0;

    int s = n - 1;
    mx = -1;
    int mx_val = 0;
    for (int i: g[centr]) {
        if (sz[i] > mx_val) {
            mx_val = sz[i];
            mx = i;
        }
    }

    function<void(int, int, int)> dfs_col = [&](int cur, int prev, int col_num) {
        col[cur] = col_num;
        for (int i: g[cur]) if (i != prev) {
            dfs_col(i, cur, col_num);
        }
    };

    if ((n - 1) % 2 == 0 && sz[mx] == n / 2) {
        dfs_col(mx, centr, 1);
    }
    else {
        s = n - 1;
        int cur = centr;
        int next;
        vector<int> branch;
        while (true) {
            next = -1, mx_val = 0;
            for (int i: g[cur]) {
                if (mx_val < sz[i]) {
                    mx_val = sz[i];
                    next = i;
                }
            }
            if (next == -1) break;
        }

        for (int i: g[cur]) if (i != next) branch.push_back(i);

        col[next] = 0;
        cur = next;
        s--;

        function<bool()

        if (s % 2 == 0 and check(branch)) {
            ...
        }
    }
}
