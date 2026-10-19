#include <cstdlib>
#include <iostream>
#include <utility>
#include <vector>
#include <queue>

using namespace std;

bool check(int x, int y, int n) {
    if (x < 0 || x >= n || y < 0 || y >= n) return false;
    return true;
}

int main() {
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    x1--;
    x2--;
    y1--;
    y2--;

    vector<vector<int>> dist(n, vector<int>(n, 1000000000));
    dist[x1][y1] = 0;
    queue<pair<int, int>> q;
    pair<int, int> p{x1, y1};
    q.push(p);

    int x[4] = {1, -1, 2, -2};

    while (q.size()) {
        pair<int, int> c = q.front();
        q.pop();
        int xc = c.first, yc = c.second;

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (abs(x[i]) != abs(x[j]) && check(xc + x[i], yc + x[j], n)) {
                    if (dist[xc + x[i]][yc + x[j]] > dist[xc][yc] + 1) {
                        pair<int, int> to{xc + x[i], yc + x[j]};
                        q.push(to);
                        dist[xc + x[i]][yc + x[j]] = dist[xc][yc] + 1;
                    }
                }
            }
        }
    }

    if (dist[x2][y2] == 1000000000) cout << -1;
    else cout << dist[x2][y2];
}
