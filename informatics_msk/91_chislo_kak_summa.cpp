#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

void generate(int n, int sum, int last) {
    if (sum == n) {
        for (auto i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
    for (int i = last; i <= n - sum; i++) {
        a.push_back(i);
        generate(n, sum + i, i);
        a.pop_back();
    }
}

int main() {
    int n;
    cin >> n;

    generate(n, 0, 1);
}
