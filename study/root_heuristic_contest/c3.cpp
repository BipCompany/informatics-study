#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n, vector<int>());
    vector<vector<int>> gg(n, vector<int>());

    vector<int> c(n, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].push_back(b);
        g[b].push_back(a);
        c[a]++;
        c[b]++;
    }

    for (int i = 0; i < n; i++) {
        for (int j: g[i]) if (c[i] < c[j] || c[i] == c[j] && i < j) gg[i].push_back(j);
    }

    int r = 0;
    bitset<100005> b;
    for (int i = 0; i < n; i++) {
        b.reset();
        for (int j: gg[i]) b.set(j, true);
        for (int j: gg[i]) for (int k: gg[j]) if (b[k]) r++;
        // cout << i << ' ' << b << ' ' << r << endl;
    }
    cout << r;
}
