#include <iostream>
#include <vector>

using namespace std;

bool check(int n, int bx, int by, int ax, int ay) {
    if (bx < 0 || bx >= n || by < 0 || by >= n || bx == ax || by == ay || (ax - ay) == (bx - by)) return false;
    return true;
}

bool dfs(int n, int ax, int ay, int bx, int by, int cx, int cy, vector<vector<bool>> &vis) {
    // cout << bx << " " << by << '\n';
    if (bx == cx && by == cy) return true;
    if (vis[bx][by]) return false;
    vis[bx][by] = true;
    int x[3] = {0, 1, -1};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (check(n, bx + x[i], by + x[j], ax, ay)) {
                if (dfs(n, ax, ay, bx + x[i], by + x[j], cx, cy, vis)) return true;
            }
        }
    }

    return false;
}

int main() {
    int n, ax, ay, bx, by, cx, cy;
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;
    ax--;bx--;cx--;ay--;by--;cy--;
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    if (dfs(n, ax, ay, bx, by, cx, cy, vis)) cout << "YES";
    else cout << "NO";
}
