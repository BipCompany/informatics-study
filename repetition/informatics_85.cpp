#include <iostream>
#include <vector>

using namespace std;
vector<int> a, used;

void solve(int n, int c = 0) {
    if (c == n) {
        for (auto& x : a) cout << x;
        cout << endl;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            a.push_back(i);
            used[i] = 1;
            solve(n, c + 1);
            used[i] = 0;
            a.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    used.resize(n + 1);

    solve(n);
}
