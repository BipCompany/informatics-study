#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, l, r, x, c = 0;
    cin >> n >> l >> r >> x;
    vector<int> a(n);
    for (auto& i : a) cin >> i;

    for (int i = 0; i < (1 << n); i++) {
        int s = 0, mn = INT_MAX, mx = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                s += a[j];
                if (a[j] < mn) mn = a[j];
                if (a[j] > mx) mx = a[j];
            }
        }
        if (s >= l && s <= r && mx - mn >= x) c++;
    }

    cout << c;
}
