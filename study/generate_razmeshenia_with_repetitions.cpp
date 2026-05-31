#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

void generate(int n, int m, int last) {
    if (last == m - 1) {
        for (int i = 0; i < m; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        last++;
        a[last] = i;
        generate(n, m, last);
        last--;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    a.resize(m);

    for (int i = 1; i <= n; i++) {
        a[0] = i;
        generate(n, m, 0);
    }

    return 0;
}
