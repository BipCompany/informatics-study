#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

vector<int> a;

bool generate(int n) {
    for (int i = n - 1; i > 0; i--) {
        if (a[i] > a[i - 1]) {
            int mn = n + 1, mn_ind = n;
            for (int j = i; j < n; j++) {
                if (a[j] < mn && a[j] > a[i - 1]) {
                    mn = a[j];
                    mn_ind = j;
                }
            }
            swap(a[mn_ind], a[i - 1]);
            sort(a.begin() + i, a.end());
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) a[i] = i + 1;

    for (int i = 0; i < n; i++) cout << a[i];
    cout << endl;
    while (generate(n)) {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << endl;
    }

    return 0;
}
