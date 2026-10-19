#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int q, n, dp[200001];
    int a[200001];

    cin >> n >> q;

    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i / 2] + 1;
    }

    for (int i = 0; i < n; i++) cin >> a[i];

    vector<vector<int>> st(dp[n] + 1, vector<int>(n));
    for (int i = 0; i < n; i++) st[0][i] = a[i];
    for (int i = 1; i < dp[n] + 1; i++) {
        for (int j = 0; j + (1 << i) <= n; j++) {
            st[i][j] = min(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
        }
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int pw = dp[r - l + 1];
        cout << min(st[pw][l], st[pw][r - (1 << pw) + 1]) << '\n';
    }
}
