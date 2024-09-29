#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
int d[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 1; i < N; i++) {
    for (int j = i; j < N; j += i) {
      d[j]++;
    }
  }

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    cout << d[n] << '\n';
  }
  return 0;
}
