#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
vector<int> d(N);
vector<int> h(N);

void dfs(int node, int par = -1){
	for(auto child : g[node]){
		if(child == par) continue;
		d[child] = d[node] + 1;
		dfs(child, node);
		h[node] = max(h[node], h[child] + 1);
	}
}

signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);

	}
	dfs(1);
	for(int i = 1; i <= n; i++){
		cout << d[i] << ' ' << h[i] << endl;
	}

	return 0;
}
