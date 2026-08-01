#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double weakness(double x, const vector<double>& a) {
    double s_max = 0.0, s_min = 0.0;
    double cur_max = 0.0, cur_min = 0.0;
    for (double val : a) {
        double v = val - x;
        cur_max = max(0.0, cur_max + v);
        s_max = max(s_max, cur_max);
        cur_min = min(0.0, cur_min + v);
        s_min = min(s_min, cur_min);
    }
    return max(s_max, -s_min);
}

int main() {
    int n;
    cin >> n;
    vector<double> a(n);
    for (auto& x: a) cin >> x;

    double l = -1e7;
    double r = 1e7;
    for (int i = 0; i < 100; i++) {
        double m1 = l + (r - l) / 3, m2 = r - (r - l) / 3;
        double w1 = weakness(m1, a);
        double w2 = weakness(m2, a);
        if (w1 <= w2) {
            r = m2;
        }
        else {
            l = m1;
        }
    }
    cout << fixed << setprecision(12) << weakness((l + r) / 2, a);
}
