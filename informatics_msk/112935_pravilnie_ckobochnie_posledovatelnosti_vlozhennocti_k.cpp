#include <iostream>
#include <string>
using namespace std;


void solve(int n, int k, string s, int op, int cl) {
    if (s.length() == 2 * n) {
        cout << s << endl;
        return;
    }

    if (op < n && op - cl < k) {
        solve(n, k, s + "(", op + 1, cl);
    }
    if (op - cl > 0) {
        solve(n, k, s + ")", op, cl + 1);
    }
}


int main() {
    int n, k;
    string s = "";
    cin >> n >> k;

    solve(n, k, s, 0, 0);

    return 0;
}
