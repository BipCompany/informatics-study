#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, MX_SIZE = 333;
    cin >> n >> q;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<long long>> heu(min(n + 1, MX_SIZE + 1), vector<long long>());

    for (int i = 1; i < min(n + 1, MX_SIZE + 1); i++) {
        heu[i].push_back(0);
        for (int j = 0; j < i; j++) {
            heu[i].push_back(a[j]);
        }
        for (int j = i; j < n; j++) {
            heu[i].push_back(heu[i][j - i + 1] + a[j]);
        }
    }

    // for (int i = 0; i < heu.size(); i++) {
    //     for (int j = 0; j < heu[i].size(); j++) cout << heu[i][j] << ' ';
    //     cout << endl;
    // }

    for (int i = 0; i < q; i++) {
        int l, r, k;
        cin >> l >> r >> k;
        if (k <= MX_SIZE) {
            cout << heu[k][r] - heu[k][max(0, l - k)] << endl;
        }
        else {
            long long s = 0;
            for (int j = l - 1; j <= r - 1; j = j + k) s += a[j];
            cout << s << endl;
        }
    }
}
