#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    int r = 0, c = 1, s = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s += x;
        for (int j = 0; j < x; j++) {
            if (i + 1 > c) a.push_back(i + 1 - c);
            else {
                a.push_back(0);
                r += c - i - 1;
            }
            c++;
        }
    }

    for (int i: a) cout << i << ' ';
    cout << endl;

    priority_queue<int> hp;
    hp.push(a[0]);
    for (int i = 1; i < s; i++) {
        int cur = a[i];
        int mx = hp.top();
        hp.pop();
        if (mx > cur) r += mx - cur;
        hp.push(cur);
        hp.push(cur);
    }

    cout << r;
}
