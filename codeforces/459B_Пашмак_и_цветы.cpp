#include <iostream>
#include <vector>

using namespace std;


int main() {
    long long n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    long long l = 0, r = n - 1;

    if (a[0] == a[n - 1]) {
        cout << 0 << " " << n * (n - 1) / 2;
        return 0;
    }

    for (long long i = 0; i < n; i++) {
        if (a[i] != a[0]) {
            l = i;
            break;
        }
    }
    for (long long i = n - 1; i >= 0; i--) {
        if (a[i] != a[n - 1]) {
            r = i + 2;
            break;
        }
    }

    cout << a[r - 1] - a[l - 1] << " " << l * (n - r + 1);

    return 0;
}
