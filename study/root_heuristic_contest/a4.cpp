#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q, MX_SIZE = 333, ln = 200337 / MX_SIZE;
    cin >> q;

    vector<int> c(200005), heu(ln, 0), cheu(ln, 0);

    for (int qu = 0; qu < q; qu++) {
        int t, x;
        cin >> t >> x;
        // x--;

        if (t == 1) {
            if (!c[x]) cheu[x / MX_SIZE]++;
            if (cheu[x / MX_SIZE] == MX_SIZE) heu[x / MX_SIZE] = 1;
            c[x]++;
        }
        else {
            c[x]--;
            if (!c[x]) {
                cheu[x / MX_SIZE]--;
                heu[x / MX_SIZE] = 0;
            }
        }

        int i = 0;
        while (heu[i]) i++;
        int j = i * MX_SIZE;
        while (c[j]) j++;
        cout << j << '\n';
    }
}
