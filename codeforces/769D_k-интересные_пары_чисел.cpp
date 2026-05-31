#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n, k;
    long long ans = 0;
    cin >> n >> k;
    vector<long long> a(10001);
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        a[c]++;
    }

    if (k == 0) {
        for (int i = 0; i < 10001; i++) {
            ans += (a[i] * (a[i] - 1)) / 2;
        }
    }
    for (int i = 0; i < 10001; i++) {
        for (int j = i + 1; j < 10001; j++) {
            if (__builtin_popcount(i ^ j) == k) {
                ans += a[i] * a[j];
            };
        }
    }

    cout << ans;

    return 0;
}
