#include <climits>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x: a) cin >> x;

    long long mn = INT_MAX;

    for (long long m = 0; m < (1 << n); m++) {
        long long g1 = 0, g2 = 0;
        for (long long i = 0; i < n; i++) {
            if (m >> i & 1) {
                g1 += a[i];
            }
            else {
                g2 += a[i];
            }
        }
        mn = min(mn, abs(g1 - g2));
    }

    cout << mn;
}
