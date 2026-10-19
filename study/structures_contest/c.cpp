#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> p(n), x(q), vis(n + 1, 0);

    for (int &i: p) cin >> i;
    for (int &i: x) cin >> i;

    for (int i = q - 1; i >= 0; i--) {
        if (!vis[x[i]]) {
            vis[x[i]] = 1;
            cout << x[i] << ' ';
        }
    }
    for (int i: p) if (!vis[i]) cout << i << ' ';
}
