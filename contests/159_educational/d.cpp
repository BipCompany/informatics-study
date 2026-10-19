#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int>> &g, vector<int> &vis, int cur, int prev) {
    if (vis[cur]) {
        return 3;
    }

    vis[cur] = 1;
    for (int j: g[cur]) {
        if (j == prev) continue;
        if (dfs(g, vis, j, cur) == 3) return 3;
    }

    return 2;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n, vector<int>());
    vector<int> cnt(n, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        cnt[a]++;
        cnt[b]++;
    }

    vector<int> vis(n, 0);

    long long r = 1;
    for (int i = 0; i < n; i++) {
        if (cnt[i] == 0) {
            cout << "Brain Melt" << '\n';
            return;
        }

        if (!vis[i]) r *= dfs(g, vis, i, -1);
    }
    if (r > 2) {
        cout << "Many" << '\n';
        return;
    }
    cout << r << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
