#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, q, MX_VAL = 316, ln;
    cin >> n >> q;
    ln = (q + MX_VAL - 1) / MX_VAL;

    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    vector<int> dist(n, 1000000000);
    queue<int> que;

    for (int i = 0; i < q; i++) {
        int op, x;
        cin >> op >> x;
        x--;
        if (op == 1) {
            que.push(x);
            dist[x] = 0;
        }
        else {
            while (!que.empty()) {
                int cur = que.front();
                que.pop();
                for (int j: g[cur]) {
                    if (dist[j] > dist[cur] + 1) {
                        dist[j] = dist[cur] + 1;
                        que.push(j);
                    }
                }
            }

            if (dist[x] == 1000000000) cout << -1 << '\n';
            else cout << dist[x] << '\n';
        }
    }
}
