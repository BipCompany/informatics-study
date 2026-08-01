#include <climits>
#include <iostream>

using namespace std;

double f(double x, int a, int b, int c, int d) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    double l = INT_MIN, r = INT_MAX;
    for (int i = 0; i < 100; i++) {
        double m = l + (r - l) / 2.0;
        if (f(l, a, b, c, d) * f(m, a, b, c, d) <= 0) r = m;
        else l = m;
    }
    cout << l + (r - l) / 2;
}
