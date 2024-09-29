// directed graph.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector <int> adj[N];
bool vis[N];

void dfs(int node, int par = -1) {
    if(vis[node]) return;
    vis[node] = true;
    for(auto child : adj[node]) {
        if(child == par) continue;
        cout << node << "->" << child << endl;
        dfs(child, node);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    while(m--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }
    dfs(1);
    return 0;
}
