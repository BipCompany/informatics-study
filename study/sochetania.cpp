#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

void generate(int n, int m, int last, int last_num) {
    if (last == m - 1) {
        for (int i = 0; i < m; i++) cout << a[i] << " ";
        cout << endl;
        return;
    }
    for (int i = last_num + 1; i <= n; i++) {
        last++;
        a[last] = i;
        generate(n, m, last, i);
        last--;
    }
}

int main() {
    int n, m;
    a.resize(m);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        a[0] = i;
        generate(n, m, 0, i);
    }

    return 0;
}
