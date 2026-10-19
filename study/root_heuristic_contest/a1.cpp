#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int ln = (n + 332) / 333;
    vector<long long> sm(ln);
    for (int i = 0; i < n; i++) {
        sm[i / 333] += arr[i];
    }

    // for (int i = 0; i < n; i++) cout << arr[i] << ' ';
    // cout << endl;
    // for (int i = 0; i < ln; i++) cout << sm[i] << ' ';
    // cout << endl;

    for (int j = 0; j < q; j++) {
        int op, a, b;
        cin >> op >> a >> b;
        if (op == 1) {
            a--;
            sm[a / 333] += b - arr[a];
            arr[a] = b;
            // for (int i = 0; i < ln; i++) cout << sm[i] << ' ';
            // cout << endl;
        }
        else {
            a--;
            b--;
            int st = a / 333, fn = b / 333;
            long long res = 0;
            if (st == fn) {
                for (int i = a; i <= b; i++) res += arr[i];
                cout << res << endl;
                continue;
            }
            if (a % 333 == 0) st--;
            else {
                for (int i = a; i < (st + 1) * 333; i++) res += arr[i];
            }
            if (b % 333 == 332) fn++;
            else for (int i = fn * 333; i <= b; i++) res += arr[i];
            for (int i = st + 1; i < fn; i++) res += sm[i];

            cout << res << endl;;
        }
    }
}
