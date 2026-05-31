#include <iostream>
#include <algorithm>
#include <ostream>
#include <vector>

using namespace std;
int n = 4;
vector<int> a(n);

void generate(int t) {
    if (t == n - 1) {
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int j = t; j < n; ++j) {
            swap(a[t], a[j]);
            t++;
            generate(t);
            t--;
            swap(a[t], a[j]);
        }
    }
}

int main() {
    for (int i = 0; i <= n; ++i) {
        a[i] = i + 1;
    }
    generate(0);
    return 0;
}
