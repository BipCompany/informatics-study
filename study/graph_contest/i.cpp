#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++) {
        if (vis[i]) continue;

        vis[i] = 1;
        queue<int> q;
        q.push(i);
        while (!q.empty()) {
            int cur = q.front();
            q.pop();
            for (int j: g[cur]) {
                if (vis[cur] == vis[j]) {
                    cout << "NO";
                    return 0;
                }
                else if (vis[j] == 0) {
                    vis[j] = -vis[cur];
                    q.push(j);
                }
            }
        }
    }

    cout << "YES";
}
