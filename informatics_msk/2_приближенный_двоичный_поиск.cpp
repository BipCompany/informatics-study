#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(k);
    for (long long& x: a) cin >> x;
    for (long long& x: b) cin >> x;

    for (auto i: b) {
        int l = 0, r = n - 1;
        while (r - l > 1) {
            int m = (l + r) / 2;
            if (a[m] <= i) {
                l = m;
            }
            else {
                r = m;
            }
            // cout << l << " " << r << " " << m << endl;
        }
        if (abs(a[r] - i) < abs(a[l] - i)) {
            cout << a[r] << endl;
        }
        else cout << a[l] << endl;
    }
}
