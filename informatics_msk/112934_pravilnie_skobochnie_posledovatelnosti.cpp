#include <iostream>
#include <string>

using namespace std;

void generate(string s, int n, int op, int cl) {
    if (op + cl == 2 * n) {
        cout << s << endl;
        return;
    }
    if (op < n) generate(s + "(", n, op + 1, cl);
    if (op - cl > 0) generate(s + ")", n, op, cl + 1);
}

int main() {
    int n;
    cin >> n;

    generate("", n, 0, 0);
}
