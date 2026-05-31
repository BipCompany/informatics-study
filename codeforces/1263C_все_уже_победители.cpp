#include <iostream>
#include <set>

using namespace std;


int main() {
    int n;
    long long m;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        set<long long> ans;
        ans.insert(0);
        for (int j = 1; j * j <= m; j++) {
            ans.insert(m / j);
            if (m / (m / j)) {
            ans.insert(j);
            }
        }
        cout << ans.size() << endl;
        for (const auto& x: ans) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
