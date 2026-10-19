#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int ln = (n + 332) / 333;
    vector<long long> mn(ln);
    vector<long long> added(ln, 0);
    for (int i = 0; i < ln; i++) {
        long long mn_cur = a[i * 333];
        for (int j = i * 333; j < min(n, (i + 1) * 333); j++) mn_cur = min(mn_cur, a[j]);
        mn[i] = mn_cur;
    }

    for (int query = 0; query < q; query++) {
        int op, l, r;
        long long x;
        cin >> op >> l >> r;
        l--;
        r--;
        int st = l / 333, fn = r / 333;

        if (op == 1) {
            cin >> x;

            if (st == fn) {
                for (int i = l; i < r + 1; i++) a[i] += x;
                long long mn_cur = a[st * 333];
                for (int i = st * 333; i < min(n, (fn + 1) * 333); i++) mn_cur = min(a[i], mn_cur);
                mn[st] = mn_cur;
                continue;
            }

            for (int i = l; i < (st + 1) * 333; i++) a[i] += x;
            long long mn_cur = a[l];
            for (int i = st * 333; i < (st + 1) * 333; i++) mn_cur = min(mn_cur, a[i]);
            mn[st] = mn_cur;

            for (int i = st + 1; i < fn; i++) added[i] += x;

            for (int i = fn * 333; i < r + 1; i++) a[i] += x;
            mn_cur = a[fn * 333];
            for (int i = fn * 333; i < min(n, (fn + 1) * 333); i++) mn_cur = min(mn_cur, a[i]);
            mn[fn] = mn_cur;
        }
        else {
            if (st == fn) {
                long long mn_cur = a[l] + added[st];
                for (int i = l; i < r + 1; i++) mn_cur = min(mn_cur, a[i] + added[st]);
                cout << mn_cur << '\n';
                continue;
            }

            long long mn_cur = a[l] + added[st];
            for (int i = l; i < (st + 1) * 333; i++) mn_cur = min(mn_cur, a[i] + added[st]);

            for (int i = st + 1; i < fn; i++) mn_cur = min(mn_cur, mn[i] + added[i]);

            for (int i = fn * 333; i < r + 1; i++) mn_cur = min(mn_cur, a[i] + added[fn]);

            cout << mn_cur << '\n';
        }
    }
}
