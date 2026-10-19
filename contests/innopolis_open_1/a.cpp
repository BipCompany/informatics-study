#include <iostream>
#include <utility>

using namespace std;

int main() {
    long long a, b, t;
    cin >> a >> b >> t;
    int x = 0, y = 1;

    if (b < a) {
        swap(a, b);
        swap(x, y);
    }
    long long cur = max(b * y / a * a, a * y);
    while (cur <= t) {
        if (cur / a % 2 == x && cur / b % 2 == y) {
            cout << cur;
            return 0;
        }
        cur += a;
    }
    cout << -1;
    return 0;
}
