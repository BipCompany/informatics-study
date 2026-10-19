#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n, m, x1, y1;
    cin >> n >> m >> x1 >> y1;
    vector<vector<int>> g(n + 2, vector<int>(m + 2, 2));

    for (int i = 1; i < n + 1; i++) {
        string a;
        cin >> a;
        for (int j = 1; j < m + 1; j++) g[i][j] = stoi(a.substr(j - 1, 1));
    }

    queue<pair<int, int>> q;
    q.push(pair<int, int>{x1, y1});
    vector<vector<int>> dist(n + 2, vector<int>(m + 2, 1000000000));
    dist[x1][y1] = 0;
    int res = 1000000000;

    while (q.size()) {
        int xa[4] = {1, -1, 0, 0};
        int ya[4] = {0, 0, 1, -1};
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first;
        int y = cur.second;

        for (int i = 0; i < 4; i++) {
            if (g[x + xa[i]][y + ya[i]] == 2) res = min(res, dist[x][y] + 1);
            else if (g[x + xa[i]][y + ya[i]] == 0 and dist[x + xa[i]][y + ya[i]] > dist[x][y] + 1) {
                q.push(pair<int, int>{x + xa[i], y + ya[i]});
                dist[x + xa[i]][y + ya[i]] = dist[x][y] + 1;
            }
        }
    }

    if (res == 1000000000) cout << -1;
    else cout << res;
}
