#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
vector<int> dept(N);

void dfs(int node, int par = -1){
	for(auto child : g[node]){
		if(child == par) continue;
		dept[child] = dept[node] + 1;
		dfs(child, node);
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
	int mx_d = - 1;
	int mx_node;
	for(int i = 1; i <= n; i++){
		if(mx_d < dept[i]){
			mx_d = dept[i];
			mx_node = i;
		}
		dept[i] = 0;
	}
	
	dfs(mx_node);
	mx_d = -1;
	for(int i = 0; i <= n; i++){
		if(mx_d < dept[i]){
			mx_d = dept[i];
		}
	}
	cout << mx_d << endl;

	return 0;
}
