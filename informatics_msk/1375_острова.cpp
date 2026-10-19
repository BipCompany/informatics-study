#include <iostream>
#include <vector>

using namespace std;
vector<int> a, ranks;

int find_set(int x) {
    if (a[x] == x) {
        return x;
    }
    return a[x] = find_set(a[x]);
}

void union_sets(int x, int y) {
    x = find_set(x);
    y = find_set(y);
    if (x != y) {
        if (ranks[x] < ranks[y]) swap(x, y);
        a[y] = x;
        if (ranks[x] == ranks[y]) ++ranks[x];
    }
}

bool check() {
    int f = find_set(1);
    for (int i = 2; i < a.size(); i++) {
        if (find_set(i) != f) {
            return false;
        }
    }

    return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  a.resize(n + 1);
  ranks.resize(n + 1);
  for (int i = 1; i <= n; i++) {
      a[i] = i;
  }

  if (check()) {
      cout << 0;
      return 0;
  }
  for (int i = 0; i < m; i++) {
      int b, c;
      cin >> b >> c;
      union_sets(b, c);
      if (check()) {
          cout << i + 1;
          return 0;
      }
  }
}
