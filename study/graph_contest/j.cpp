#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n, m, w, x1, y1, z1;
    cin >> n >> m >> w >> x1 >> y1 >> z1;
    vector<vector<vector<int>>> g(n + 2, vector<vector<int>>(m + 2, vector<int>(w + 2, 2)));
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < m + 1; j++) {
            string a;
            cin >> a;
            for (int k = 0; k < w; k++) g[i][j][k + 1] = stoi(a.substr(k, 1));
        }
    }

    queue<array<int, 3>> q;
    q.push((array<int, 3>){x1, y1, z1});
    int x[6] = {1, -1, 0, 0, 0, 0};
    int y[6] = {0, 0, 1, -1, 0, 0};
    int z[6] = {0, 0, 0, 0, 1, -1};

    int res = 1000000000;
    vector<vector<vector<int>>> dist(n + 2, vector<vector<int>>(m + 2, vector<int>(w + 2, 1000000000)));
    dist[x1][y1][z1] = 0;
    while (!q.empty()) {
        array<int, 3> cur = q.front();
        int xc = cur[0], yc = cur[1], zc = cur[2];
        q.pop();
        for (int i = 0; i < 6; i++) {
            if (g[xc + x[i]][yc + y[i]][zc + z[i]] == 2 and dist[xc][yc][zc] + 1 < res) res = dist[xc][yc][zc] + 1;
            else if (g[xc + x[i]][yc + y[i]][zc + z[i]] == 0 and dist[xc][yc][zc] + 1 < dist[xc + x[i]][yc + y[i]][zc + z[i]]) {
                dist[xc + x[i]][yc + y[i]][zc + z[i]] = dist[xc][yc][zc] + 1;
                q.push((array<int, 3>){xc + x[i], yc + y[i], zc + z[i]});
            }
        }
    }

    if (res == 1000000000) cout << -1;
    else cout << res;
}
