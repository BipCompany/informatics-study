#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long a, b, r, n;
    cin >> a >> b >> r >> n;
    a = a & (r - 1);
    b = b & (r - 1);
    vector<int> cnt(r);

    long long p = 0;
    cnt[0] = 1;
    for (int i = 1; i < n; i++) {
        long long pcur = (a + b * p) & (r - 1);
        cnt[pcur] += 1;
        p = pcur;
    }

    long long res = 0;
    for (int i = 0; i < r - 2; i++) {
        res = (res + (long long)cnt[i] * cnt[i + 2]) % 998244353;
    }

    cout << res;
}
