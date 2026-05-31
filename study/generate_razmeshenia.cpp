#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> a;
vector<int> used;
short m;
short n;

bool generate() {
    int k = m;
    for (int i = n - 1; i >= 0; i--) {
        if (!used[i]) {
            a[k] = i + 1;
            k++;
        }
    }

    if (next_permutation(a.begin(), a.end())) {
        for (int i = 0; i < m; i++) used[a[i] - 1] = 1;
        for (int i = m; i < n; i++) used[a[i] - 1] = 0;
        return true;
    }
    return false;
}

int main() {
    cin >> m >> n;

    for (int i = 0; i < n; i++) a.push_back(i + 1);

    for (int i = 0; i < n; i++) {
        if (i < m) used.push_back(1); else used.push_back(1);
    }

    for (int i = 0; i < m; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    while (generate()) {
        for (int i = 0; i < m; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
