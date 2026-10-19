#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    queue<pair<int, int>> q;
    vector<vector<int>> dist(n, vector<int>(m, 1000000000));
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        q.push(pair<int, int>{x - 1, y - 1});
        dist[x - 1][y - 1] = 0;
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            if (x + dx[i] < 0 || x + dx[i] >= n || y + dy[i] < 0 or y + dy[i] >= m) continue;
            if (dist[x + dx[i]][y + dy[i]] > dist[x][y] + 1) {
                dist[x + dx[i]][y + dy[i]] = dist[x][y] + 1;
                q.push(pair<int, int>{x + dx[i], y + dy[i]});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << dist[i][0];
        for (int j = 1; j < m; j++) {
            cout << ' ' << dist[i][j];
        }
        cout << '\n';
    }
}
