#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> digit(14, 0);
    int fact[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880,
    3628800, 39916800, 479001600};
    int n = 5;
    int res = 0;
    int Np, d, pos;

    for (int i = n; i > 0; i--) {
        Np = num % fact[i - 1];
        d = num / fact[i - 1];
        if (Np) d++; else Np += fact[i - 1];
        num = Np;
        pos = 0;
        for (int j = 1; j <= n; j++) {
            if (!digit[j]) {
                pos += 1;
            }
            if (pos == d) {
                digit[j] = 1;
                res *= 10;
                res += j;
                break;
            }
        }
    }

    cout << res;
    return 0;
}
