#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int res = 0;

    for (int mask = 1; mask < (1 << n); mask++) {
        int s = 0;

    }
}
