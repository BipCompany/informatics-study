#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;


int main() {
    int n;
    double c;
    cin >> n >> c;
    vector<double> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    unordered_map<int, set<double>> dp;

    for (int i = 0; i < n; i++) {
        dp[1 << i].insert(a[i]);
    }

    for (int mask = 0; mask < (1 << n); mask++) {
        if (!(mask & (mask - 1))) continue;
        int lsb = mask & -mask;

        int sub = (mask - 1) & mask;
        while (sub) {
            if (sub & lsb) {
                int other = mask ^ sub;
                for (auto i : dp[sub]) {
                    for (auto j : dp[other]) {
                        dp[mask].insert(i + j);
                        dp[mask].insert((i * j) / (i + j));
                    }
                }
            }
            sub = (sub - 1) & mask;
        }
    }

    double best_val, best_diff = INT_MAX;
    for (auto pair : dp) {
        for (auto num : pair.second) {
            if (abs(c - num) < best_diff) {
                best_diff = abs(c - num);
                best_val = num;
            }
        }
    }

    cout << fixed << setprecision(6) << best_val;

    return 0;
}
