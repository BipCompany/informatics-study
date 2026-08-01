// код неправильный
// дорешал задачу на питоне тк там есть дебаггер
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n), b(k);
    for (long long& x: a) cin >> x;
    for (long long& x: b) cin >> x;


    for (auto i : b) {
        int l = 0, r = n - 1;
        while (l < r) {
            int m = l + (r - l + 1) / 2;
            if (a[m] <= l) l = m;
            else r = m - 1;
        }
        int left = l;
        l = 0, r = n - 1;
        while (l < r) {
            int m = l + (r - l) / 2;
            if (a[m] < l) l = m + 1;
            else r = m;
        }
        int right = r;

        // if (a[left] != i and a[right] != i) cout << 0 << endl;
        // else
        cout << a[left] << " " << a[right] << endl;
    }
}
