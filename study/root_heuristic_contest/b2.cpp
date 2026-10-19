#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

struct Query {
    int l, r, id;
};

int main() {
    int n, q, MX_SIZE = 333;
    cin >> n >> q;

    vector<int> a(n);
    for (int &x: a) {
        cin >> x;
        if (x > n) x = -1;
    }

    vector<Query> qs(q);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        qs[i] = {l - 1, r - 1, i};
    }

    sort(qs.begin(), qs.end(), [&] (const Query& x, const Query& y) {
        int bx = x.l / MX_SIZE, by = y.l / MX_SIZE;
        if (bx != by) return bx < by;
        if (bx & 1) return x.r > y.r;
        return x.r < y.r;
    });

    vector<int> heu(100005), vans(q);
    int ans = 0;
    int curl = 0, curr = -1;

    for (const Query &qu: qs) {
        int l = qu.l, r = qu.r;

        while (curl > l) {
            curl--;
            if (a[curl] == -1) continue;
            if (heu[a[curl]] == a[curl]) ans--;
            heu[a[curl]]++;
            if (heu[a[curl]] == a[curl]) ans++;
        }
        while (curr < r) {
            curr++;
            if (a[curr] == -1) continue;
            if (heu[a[curr]] == a[curr]) ans--;
            heu[a[curr]]++;
            if (heu[a[curr]] == a[curr]) ans++;
        }
        while (curl < l) {
            if (a[curl] != -1) {
                if (heu[a[curl]] == a[curl]) ans--;
                heu[a[curl]]--;
                if (heu[a[curl]] == a[curl]) ans++;
            }
            curl++;
        }
        while (curr > r) {
            if (a[curr] != -1) {
                if (heu[a[curr]] == a[curr]) ans--;
                heu[a[curr]]--;
                if (heu[a[curr]] == a[curr]) ans++;
            }
            curr--;
        }

        vans[qu.id] = ans;
    }

    for (int i: vans) cout << i << '\n';
}
