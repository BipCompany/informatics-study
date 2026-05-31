#include <climits>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, l, r, x, ans = 0;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < (1 << n); i++) {
        if (!(__builtin_popcount(i) > 1)) continue;
        int s = 0, mn = INT_MAX, mx = INT_MIN;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                s += a[j];
                if (a[j] < mn) mn = a[j];
                if (a[j] > mx) mx = a[j];
            }
        }
        if (s >= l && s <= r && mx - mn >= x) ans++;
    }

    cout << ans;

    return 0;
}
