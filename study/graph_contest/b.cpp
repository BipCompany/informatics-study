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

    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int cnt = 0;
    vector<bool> vis(n);
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            dfs(g, vis, i);
            cnt++;
        }
    }

    cout << cnt;
}
