#include <algorithm>
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int n, s, k = 200005, sm = 0;
    cin >> n >> s;
    vector<int> a(n), c(k, 0);
    for (int &x: a) {
        cin >> x;
        c[x]++;
        sm += x;
    }

    if (s >= sm) {
        cout << s - sm;
        return 0;
    }

    bitset<200005> b;
    b.set(0, true);

    for (int i = 1; i < k; i++) {
        if (c[i] == 0) continue;

        int remain = c[i], p = 0;
        while (remain >= (1 << p)) {
            b |= (b << (i * (1 << p)));
            remain -= (1 << p);
            p++;
        }
        b |= (b << remain * i);
    }

    for (int i = 0; i <= k; i++) {
        if (s - i >= 0 && b[s - i]) {
            cout << i;
            return 0;
        }
        if (s + i <= k && b[s + i]) {
            cout << i;
            return 0;
        }
    }

    cout << s - sm;
}
