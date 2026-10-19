#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<int> st;
    for (long long &x: a) cin >> x;

    long long mx = 0;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.back()] >= a[i]) {
            long long h = a[st.back()], l = -1;
            st.pop_back();
            if (!st.empty()) l = st.back();
            mx = max(h * (i - l - 1), mx);
        }
        st.push_back(i);
    }

    while (!st.empty()) {
        long long h = a[st.back()], l = -1;
        st.pop_back();
        if (!st.empty()) l = st.back();
        mx = max(h * (n - l - 1), mx);
    }

    cout << mx;
}
