#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
vector<int> even(N,0);
vector<int> subTree(N,0);

void dfs(int node, int par = -1){
	if(node % 2 == 0) even[node]++;
	subTree[node] += node;
	for(auto child : g[node]){
		if(child == par) continue;
		dfs(child, node);
		even[node] += even[child];
		subTree[node] += subTree[child];
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
		cout << subTree[i] << ' ' << even[i] << endl;
	}
	// int q;
	// cin >> q;
	// while(q--){
	// 	int v;
	// 	cin >> v;
	// 	cout << even[v] << ' ' << subTree[v] << endl;
	// }

	return 0;
}
