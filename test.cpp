#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i: a) cin >> i;

    int x = 0;
    for (int i = n - 1; i >= 0; i--) x += (a[i] - x) * 2;

    cout << x / 2 << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
