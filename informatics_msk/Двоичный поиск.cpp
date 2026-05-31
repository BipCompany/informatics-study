# include <iostream>
# include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b(k);
    for (int i = 0; i < k; i++) {
        cin >> b[i];
    }

    int l, r;
    for (int i = 0; i < k; i++) {
        l = 0;
        r = n - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (a[mid] > 2) {
                //
            }
        }
    }
}
