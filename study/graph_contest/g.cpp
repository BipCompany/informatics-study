#include <iostream>
#include <vector>

using namespace std;

bool dfs(const vector<vector<int>> &g, vector<int> &vis, int cur) {
    if (vis[cur] == 1) return true;
    else if (vis[cur] == 2) return false;

    vis[cur] = 1;

    for (int i: g[cur]) {
        if (dfs(g, vis, i)) return true;
    }
    vis[cur] = 2;
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);

    }

    vector<int> vis(n, 0);

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            if (dfs(g, vis, i)) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}
