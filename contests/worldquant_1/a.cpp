#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int st = 101, fn, c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            st = min(st, i);
            fn = i;
            c++;
        }
    }

    if (c == 2) cout << 1 << '\n';
    else cout << fn - st << '\n';
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
