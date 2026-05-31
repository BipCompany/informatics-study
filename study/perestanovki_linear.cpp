#include <iostream>
#include <algorithm>
#include <ostream>
#include <vector>

using namespace std;
int n = 4;
vector<int> a(n);

bool nextIteration() {
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            int min_val = a[i + 1], min_ind = i + 1;
            for (int j = i + 2; j < n; j++) {
                if (a[j] < min_val && a[j] > a[i]) {
                    min_val = a[j];
                    min_ind = j;
                }
            }
            swap(a[i], a[min_ind]);
            sort(a.begin() + i + 1, a.end());
            return 1;
        }
    }
    return 0;
}

int main() {
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    cout << "jorking it";
    while (nextIteration()) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
