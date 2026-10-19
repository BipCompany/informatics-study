#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int mn = 0, bmn = -1, bmx = -1;
    double br = 1.0;
    for (int i = 0; i < n; i++) {
        double cr = a[i] / a[mn];
        if (cr > br) {
            br = cr;
            bmn = mn;
            bmx = i;
        }
        if (a[mn] > a[i]) mn = i;
    }

    if (br > 1.0) cout << bmn + 1 << " " << bmx + 1;
    else cout << "0 0";

    return 0;
}
