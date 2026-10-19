#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long a;
        cin >> a;
        bool f = false;
        for (int i = 2; i <= sqrt(a); ++i) {
            if (a % i == 0) {
                // cout << a << " " << i << endl;
                f = true;
                break;
            }
        }
        if (f) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
