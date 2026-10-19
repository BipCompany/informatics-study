#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> all, cur;
    bool f = false;
    for (int &x: a) {
        cin >> x;
        all[x]++;
        if (all[x] > 1) f = true;
    }
    if (!f) {
        cout << 0;
        return;
    }

    int curk = 0, l = 0, mn = n;
    for (auto [x, y]: all) {
        if (y > 1) curk++;
        cout << x << ' ' << y << endl;
    }
    cout << curk << endl;
    for (int r = 0; r < n; r++) {
        all[a[r]]--;
        if (all[a[r]] == 1) curk--;
        while (curk < 1 && l < r) {
            if (r - l + 1 < mn) {
                cout << all[l] << ' ' << all[r] << endl;
                mn = r - l + 1;
            }
            if (all[a[l]] == 1) {
                curk++;
                cout << 'a';
            }
            all[a[l]]++;
            l++;
        }
    }

    cout << mn << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
