#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

vector<int> g[N];
vector<int> level(N);
bool vis[N];

void bfs(int node){
	queue<int> q;
	q.push(node);
	vis[node] = true;
	while(!q.empty()){
		int cc = q.front();
		q.pop();
		for(auto child : g[cc]){
			if(!vis[child]){
				q.push(child);
				vis[child] = true;
				level[child] = level[cc] + 1;
			}
		}
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
 bfs(1);
 for(int i = 1; i <= n; i++){
 	cout << i << "->" << level[i] << endl;
 }

 return 0;
}
