#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a == b) {
        cout << 0;
        return 0;
    }
    a--;
    b--;
    vector<vector<int>> g(n, vector(n, 0));

    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        for (int j = 0; j < n; j++) g[i][j] = stoi(c.substr(j, 1));
    }

    queue<int> q;
    vector<int> dist(n, 1000);
    dist[a] = 0;
    q.push(a);
    while (q.size()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < n; i++) {
            if (!g[x][i]) continue;
            if (dist[x] + 1 < dist[i]) {
                dist[i] = dist[x] + 1;
                q.push(i);
            }
        }
    }

    if (dist[b] == 1000) cout << -1;
    else cout << dist[b];

    return 0;
}
