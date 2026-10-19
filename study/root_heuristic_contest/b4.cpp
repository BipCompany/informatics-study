#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int n, q, MX_VAL = 333;
    cin >> n >> q;

    vector<int> a(n);
    unordered_map<int, int> c;
    for (int &x: a) {
        cin >> x;
        c[x]++;
    }
    vector<unordered_map<int, int>> pref(n, unordered_map<int, int>());
    for (const int x: a) {

    }
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) solve();
}
