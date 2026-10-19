#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    vector<int> stack;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') stack.push_back(1);
        else if (!stack.empty() && stack.back() == 1) {
            stack.pop_back();
        }
        else s.push_back(0);
    }

    if (stack.empty()) cout << "YES";
    else cout << "NO";
}
