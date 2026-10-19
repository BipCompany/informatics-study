#include <iostream>
#include <vector>

using namespace std;

void dfs(const vector<vector<int>> &g, vector<bool> &vis, int cur) {
    if (vis[cur]) return;

    vis[cur] = true;

    for (int i: g[cur]) {
        dfs(g, vis, i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    if (m != n - 1) {
        cout << "NO";
        return 0;
    }

    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);

    }

    vector<bool> vis(n, false);
    dfs(g, vis, 0);

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}
