# include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    m = 1;
    int cnt = 0;
    while (n > m) {
        cnt ++;
        m *= 2;
    }
    cout << cnt << endl;
    return 0;
}
