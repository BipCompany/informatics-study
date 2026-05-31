#include <iostream>
#include <vector>
using namespace std;


vector<int> a;


void solve(int n, int s, int last) {
    if (s == n) {
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= min(last, n - s); i++) {
        a.push_back(i);
        solve(n, s + i, i);
        a.pop_back();
    }
}


int main() {
    int n;
    cin >> n;

    solve(n, 0, n);

    return 0;
}
