#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    int n = 5;
    vector<int> digit(n, 0);
    int fact[13] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880,
    3628800, 39916800, 479001600};
    int res = 0;

    vector<int> numarr(n);
    for (int i = n - 1; i >= 0; i--) {
        numarr[i] = num % 10;
        num /= 10;
    }

    int c;
    for (int i = 0; i < n; i++) {
        c = 0;
        for (int j = 0; j < numarr[i] - 1; j ++) {
            if (!digit[j]) c++;
        }
        digit[numarr[i] - 1] = 1;
        res += fact[n - 1 - i] * c;
    }
    res += 1;

    cout << res;
    return 0;
}
