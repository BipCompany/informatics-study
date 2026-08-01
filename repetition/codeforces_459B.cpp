#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int mn = a.front(), mx = a.back();
    long long cmn = 0, cmx = 0;
    if (mn == mx) {
        cout << 0 << " " << n * (n - 1) / 2;
        return 0;
    }

    while (a[cmn] == mn) {
        cmn++;
    }
    while (a[n - 1 - cmx] == mx) {
        cmx++;
    }
    cout << mx - mn << " " << cmx * cmn;

    return 0;
}
