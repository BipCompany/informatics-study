#include <iostream>
#include <numeric>

using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        long long a, b;
        cin >> a >> b;
        cout << gcd(a, b) << endl;
    }
}
