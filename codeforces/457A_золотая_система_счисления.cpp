#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    string as, bs;
    vector<long long> a, b;
    cin >> as >> bs;
    long long mx = max(as.size(), bs.size());
    if (mx < 3) mx = 3;
    a.resize(mx);
    b.resize(mx);

    for (long long i = 0; i < as.size(); i++) {
        a[as.size() - i - 1] = as[i] - '0';
    }

    for (long long i = 0; i < bs.size(); i++) {
        b[bs.size() - i - 1] = bs[i] - '0';
    }

    for (long long i = 0; i < mx - 2; i++) {
        long long diff = a[i] - b[i];
        if (a[i] >= 1 && a[i + 1] >= 1) {
            a[i]--;
            a[i + 1]--;
            a[i + 2]++;
        }
        if (b[i] >= 1 && b[i + 1] >= 1) {
            b[i]--;
            b[i + 1]--;
            b[i + 2]++;
        }
    }

    for (int i = mx - 1; i >= 0; i--) {
        int diff = a[i] - b[i];
        if (diff > 0) {
            cout << ">";
            return 0;
        }
        else if (diff < 0) {
            cout << "<";
            return 0;
        }
    }

    cout << "=";

    return 0;
}
