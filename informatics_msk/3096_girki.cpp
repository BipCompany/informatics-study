#include <iostream>
#include <vector>

using namespace std;

vector<int> a, b1, b2, b3;
int s1, s2, s3;

bool generate(int n, int sum, int last) {
    if (b1.size() == n / 3 && b1.size() == b2.size() && b3.size() == b2.size()) {
        if (s1 == s2 && s2 == s3 && s1 == sum / 3) {
            for (auto i : b1) cout << i << " ";
            cout << endl;
            for (auto i : b2) cout << i << " ";
            cout << endl;
            for (auto i : b3) cout << i << " ";
            cout << endl;
            return true;
        }
        else return false;
    }
    int next = last + 1;
    if (b1.size() < n / 3 && s1 < sum / 3) {
        s1 += a[next];
        b1.push_back(next + 1);
        if (generate(n, sum, next)) {
            return true;
        }
        else {
            s1 -= a[next];
            b1.pop_back();
        }
    }
    if (b2.size() < n / 3 && s2 < sum / 3) {
        s2 += a[next];
        b2.push_back(next + 1);
        if (generate(n, sum, next)) {
            return true;
        }
        else {
            s2 -= a[next];
            b2.pop_back();
        }
    }
    if (b3.size() < n / 3 && s3 < sum / 3) {
        s3 += a[next];
        b3.push_back(next + 1);
        if (generate(n, sum, next)) {
            return true;
        }
        else {
            s3 -= a[next];
            b3.pop_back();
        }
    }
    return false;
}

int main() {
    int n, sum = 0;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    b1.push_back(1);
    s1 += a[0];
    if (!generate(n, sum, 0)) cout << "No solution";
}
