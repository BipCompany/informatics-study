#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &g, vector<pair<int, int>> &nw, int n) {
    queue<pair<int, int>> que;
    for (auto i: nw) {
        que.push(i);
        g[i.first][i.second] = 0;
    }

    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

    while (!que.empty()) {
        auto [x, y] = que.front();
        que.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n || g[x][y] + 1 >= g[nx][ny]) continue;
            g[nx][ny] = g[x][y] + 1;
            que.push(pair<int, int>{nx, ny});
        }
    }
}

int main() {
    int n, k, ln, MX_SIZE = 333;
    cin >> n >> k;

    ln = (k + MX_SIZE - 1) / MX_SIZE;

    vector<vector<int>> g(n, vector<int>(n, 1005)), q(k, vector<int>(3));
    for (int i = 0; i < k; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        x--;
        y--;
        q[i] = {t, x, y};
    }

    for (int j = 0; j < ln; j++) {
        vector<pair<int, int>> nw;
        for (int i = j * MX_SIZE; i < min(k, (j + 1) * MX_SIZE); i++) {
            int t = q[i][0], x = q[i][1], y = q[i][2];

            if (t == 1) nw.push_back(pair<int, int>{x, y});
            else {
                int mn = g[x][y];
                for (auto f: nw) mn = min(mn, abs(x - f.first) + abs(y - f.second));
                if (mn == 1005) cout << -1 << '\n';
                else cout << mn << '\n';
            }
        }
        bfs(g, nw, n);
    }
}
