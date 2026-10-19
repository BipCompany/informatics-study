#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a;
        cin >> a;
        int c = 0, j = 2;
        double sq = sqrt(a);
        for (int j = 1; j <= sq; j++) {
            if (a % j == 0) c += 2;
            if (j == sq) c--;
        }
        cout << c << endl;
    }
}
