#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, bl = 0, br = 1, bs = 0;
    for (int i = 1; i < n; i++) {
        while (i - l - 1 >= k) {
            if (a[bl] < a[l]) bl = l;
            l++;
        }
        if (a[i] + a[bl] > bs) {
            bs = a[i] + a[bl];
            br = i;
        }
    }

    cout << bl + 1 << " " << br + 1;
}
