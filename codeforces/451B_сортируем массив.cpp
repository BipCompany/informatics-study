#include <climits>
#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    if (n == 1) {
        cout << "yes" << endl << 1 << " " << 1;
        return 0;
    }

    bool f = true;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            f = false;
            break;
        }
    }
    if (f) {
        cout << "yes" << endl << 1 << " " << 1;
        return 0;
    }

    int l = 0, r = n - 1;

    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            l = i - 1;
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        if (a[i + 1] < a[i]) {
            r = i + 1;
            break;
        }
    }

    for (int i = 0; i < (r - l + 1) / 2; i++) {
        swap(a[l + i], a[r - i]);
    }

    f = true;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] > a[i]) {
            f = false;
            break;
        }
    }
    if (f) {
        cout << "yes" << endl << l + 1 << " " << r + 1;
        return 0;
    }

    cout << "no";

    return 0;
}
