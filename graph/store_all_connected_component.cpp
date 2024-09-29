#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<int>g[N];
vector<vector<int>> cc;
vector<int> curr_cc(N);
bool vis[N];

void dfs(int node){
	if(vis[node]) return;
	vis[node] = true;
	curr_cc.push_back(node);
	for(auto child : g[node]){
		dfs(child);
	}
}
signed main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	while(m--){
		int a, b;
		cin >> a >> b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(!vis[i]){
			curr_cc.clear();
			dfs(i);
			cc.push_back(curr_cc);
		}
	}
	cout << cc.size() << endl;
	for(auto x : cc){
		for(auto d : x){
			cout << d << ' ';
		}
		cout << endl;

	}

	return 0;
}
