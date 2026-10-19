#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        long long a;
        cin >> a;

        double sq = sqrt(a);
        int j = 2;

        while (j <= sqrt(a)) {
            if (a % j == 0) {
                cout << j << " ";
                a /= j;
            }
            else j++;
        }
        if (a != 1) cout << a;
        cout << endl;
    }
}
