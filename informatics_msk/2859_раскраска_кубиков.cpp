#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    vector<int> a(n), v(1), res(1, 1);
    for (int i = 0; i < n; i++) cin >> a[i];
    v[0] = a[0];

    for (int i = 1; i < n; i++) {
        int l = -1, r = cnt - 1;
        while (r - l > 1) {
            int m = l + (r - l) / 2;
            if (v[m] < a[i]) r = m;
            else l = m;
        }
        if (v[r] < a[i]) {
            v[r] = a[i];
            res.push_back(r + 1);
        }
        else {
            v.push_back(a[i]);
            cnt++;
            res.push_back(cnt);
        }
    }

    cout << cnt << endl;
    for (auto& i : res) cout << i << " ";
}
