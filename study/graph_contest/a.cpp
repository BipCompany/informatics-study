#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        for (int j = 0; j < n; j++) {
            g[i][j] = stoi(a.substr(j, 1));
        }
    }

    for (int i = 0; i < n; i++) {
        vector<int> d;
        for (int j = 0; j < n; j++) {
            if (g[i][j]) d.push_back(j + 1);
        }
        cout << d.size();
        for (auto x: d) cout << ' ' << x;
        cout << '\n';
    }
}
