#include <set>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<long long> st;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        st.insert(x);
    }

    long long r = 0;
    while (st.size() >= 2) {
        long long a = *st.begin();
        st.erase(st.begin());
        long long b = *st.begin();
        st.erase(st.begin());
        r += a + b;
        st.insert(a + b);
    }

    cout << r;
}
