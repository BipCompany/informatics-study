#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

void solve(int n, int k, int last) {
    if (n == 1) {
        for (int i = 0; i < a.size() - 1; i++) {
            cout << a[i] << "*";
        }
        cout << a.back() << endl;
        return;
    }
    for (int i = max(last, k); i <= n; i++) {
        if (n % i == 0) {
            a.push_back(i);
            solve(n / i, k, i);
            a.pop_back();
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    solve(n, k, 2);

    return 0;
}
