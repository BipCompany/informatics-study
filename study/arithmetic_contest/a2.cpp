#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        long long a, b, aa, bb;
        cin >> a >> b;
        aa = a;
        bb = b;

        if (a < b) swap(a, b);
        while (b != 0) {
            a = a % b;
            swap(a, b);
        }
        cout << aa / a * bb << endl;
    }
}
