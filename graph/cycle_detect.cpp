#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<int> g[N];
bool vis[N];

bool cycle(int node, int par = -1){
	if(vis[node]) return true;
	vis[node] = true;
	for(auto child : g[node]){
		if(par == child) continue;
		if(cycle(child, node)) return true;
	}
	return false;
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
	if(cycle(1)) cout << "loop detect" << endl;
	else cout << "not loop" << endl;


	return 0;
}
