#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x: a) cin >> x;

    vector<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        pair<int, int> cur = {x, x};
        while (!st.empty() && (st.back().first - 1 == cur.second or st.back().second == cur.first - 1)) {
            auto [bx, by] = st.back();
            st.pop_back();
            cur = {min(cur.first, bx), max(cur.second, by)};
        }
        st.push_back(cur);
    }

    if (st.size() == 1) cout << "YES";
    else cout << "NO";
}
