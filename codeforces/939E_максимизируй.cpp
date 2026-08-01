#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

double f(int k, const vector<int>& a) {
    int mx = a.back();
    double s = a.back();
    for (int i = 0; i < k; i++) {
        s += a[i];
    }
    return mx - s / (k + 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int operation;
        cin >> operation;
        if (operation == 1) {
            int newest;
            cin >> newest;
            a.push_back(newest);
        }
        else {
            int l = 0, r = a.size() - 1;
            while (r - l > 2) {
                int m1 = l + (r - l) / 3;
                int m2 = r - (r - l) / 3;
                if (f(m1, a) < f(m2, a)) r = m2;
                else if (f(m1, a) > f(m2, a)) l = m1;
                else {
                    r = m2;
                    l = m1;
                }
            }
            double best = 0;
            for (int j = l; j <= r; j++) {
                double cur = f(j, a);
                if (cur > best) best = cur;
                // cout << cur << "\n";
            }

            cout << fixed << setprecision(12) << best << '\n';
        }
    }
}
