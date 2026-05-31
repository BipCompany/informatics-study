#include <algorithm>
#include <iostream>
#include <set>

using namespace std;


int main() {
    int n, m, nh, mh;
    set<int> happyN, happyM;
    cin >> n >> m;
    cin >> nh;
    for (int i = 0; i < nh; i++) {
        int h;
        cin >> h;
        happyN.insert(h);
    }
    cin >> mh;
    for (int i = 0; i < mh; i++) {
        int h;
        cin >> h;
        happyM.insert(h);
    }

    for (int i = 0; i < 2 * n * m; i++) {
        if (happyN.contains(i % n) or happyM.contains(i % m)) {
            happyN.insert(i % n);
            happyM.insert(i % m);
        }

        if (n + m == happyN.size() + happyM.size()) {
            cout << "Yes";
            return 0;
        }
    }

    cout << "No";

    return 0;
}
