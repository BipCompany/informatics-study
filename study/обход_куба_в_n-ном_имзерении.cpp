#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

vector<string> generateObhod(int n) {
    if (n == 1) {
        vector<string> a = {"0", "1"};
        return a;
    }
    int l = pow(2, n - 1);
    vector<string> a(l * 2), b = generateObhod(n - 1);
    for (int i = 0; i < l; i++) {
        a[i] = b[i] + "0";
        a[l * 2 - 1 - i] = b[i] + "1";
    }
    return a;
}

int main() {
    int n;
    cin >> n;

    for (auto i: generateObhod(n)) {
        cout << i << endl;
    }
}
