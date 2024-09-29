#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<bool> sieve() {
	vector<bool> vis(N + 2, true);
	vis[0] = vis[1] = false;
	for (int i = 2; i * i <= N; i++) { 
		if (vis[i]) {
			for (int j = i * i; j <= N; j += i) {
				vis[j] = false;
			}
		}
	}
	return vis;
}

vector<int> prefix(vector<bool>& v) { 
	vector<int> pref(v.size() + 1, 0);
	for (int i = 1; i < v.size(); i++) { 
		pref[i] = pref[i - 1] + v[i];
	}
	return pref;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<bool> p = sieve();
	vector<int> pref = prefix(p);
	int q;
	cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		int ans = pref[r] - pref[l-1]; 
		cout << ans << endl;
	}

	return 0;
}
