#include <iostream>

using namespace std;

void solve() {
    int n, odd = 0, even = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x & 1) odd++;
        else even++;
    }

    if ((odd == 1 && even == 1) || (odd == 3 && even == 0)) cout << "LARPity\n";
    else cout << "MOGgity\n";
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
