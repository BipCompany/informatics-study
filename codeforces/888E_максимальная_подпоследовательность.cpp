#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
vector<long long> a;


vector<long long> find_subsums(int c, int n, long long m) {
    vector<long long> sums;
    for (int i = 0; i < (1 << n); i++) {
        long long s = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                s += a[j + c];
            }
        }
        s %= m;
        sums.push_back(s);
    }
    return sums;
}


int main() {
    int n;
    long long m;

    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> x = find_subsums(0, n / 2, m), y = find_subsums(n / 2, n - n / 2, m);

    sort(y.begin(), y.end());
    // for (int i = 0; i < x.size(); i++) {
    //     cout << x[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < y.size(); i++) {
    //     cout << y[i] << " ";
    // }
    // cout << endl;

    long long max = 0;

    for (auto i: x) {
        auto p = lower_bound(y.begin(), y.end(), m - i - 1);
        if (p == y.end() || *p != m - i - 1) p--;
        if (*p + i > max) {
            max = *p + i;
        }
    }

    cout << max;

    return 0;
}
