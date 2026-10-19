#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    long long mx = 0;
    for (long long &x: a) {
        cin >> x;
        mx = max(x, mx);
    }

    if (n == 1) {
        cout << a[0] << '\n';
        return;
    }

    for (int i = 0)
    cout << s << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
