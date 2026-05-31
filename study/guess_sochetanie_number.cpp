#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;

    int sum = 1;

    for (int i = 0; i < s.length(); i++) {
        int curr = s[i] - '0';
        sum += curr - i - 1;
    }

    cout << sum;

    return 0;
}
