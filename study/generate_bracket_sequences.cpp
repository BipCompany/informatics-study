#include <iostream>
#include <string>

using namespace std;

void generate(string s, int op, int cl, int n) {
    if (op + cl == 2 * n) {
        cout << s << endl;
    }
    if (op < n) {
        generate(s + "(", op + 1, cl, n);
    }
    if (op - cl > 0) generate(s + ")", op, cl + 1, n);
}

int main() {
    int n;
    cin >> n;
    generate("", 0, 0, n);

    return 0;
}
