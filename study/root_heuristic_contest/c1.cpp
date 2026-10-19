#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i < n + 1; i++) {
        long long k = 1, pm = 1;
        while (true) {
            long long p1 = (3 * k * k - k) / 2;
            if (p1 > i) break;
            dp[i] = (dp[i] + dp[i - p1] * pm + 1000000007) % 1000000007;

            long long p2 = (3 * k * k + k) / 2;
            if (p2 > i) break;
            dp[i] = (dp[i] + dp[i - p2] * pm + 1000000007) % 1000000007;

            k++;
            pm = -pm;
        }
    }

    cout <<  dp[n];
}
