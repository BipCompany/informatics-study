#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool check(int m, const vector<int> &a, int n) {
    int sec = 0, fir = 0;
    for (int i = n - 1; i > 1; i--) {
        int get = fir;
        if (a[i] + get < m) return false;

        int give = min(a[i] + get - m, a[i]);
        fir = sec + give / 3;
        sec = give / 3 * 2;
    }

    if (a[0] + sec < m or a[1] + fir < m) return false;

    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 1, r = 1e9 + 1;
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (check(m, a, n)) l = m;
        else r = m;
    }
    cout << l << endl;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
