#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
vector<int> g[N];
vector<int> dept(N);

void dfs(int node, int par = -1){
    for(auto child : g[node]) {
        if(child == par) continue;
        dept[child] = dept[node] + 1;
        dfs(child, node);
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    for(int i = 0; i < n - 1; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1);
    int max_dep = -1, mx_node = -1;
    for(int i = 1; i <= n; i++){
        if(dept[i] > max_dep){
            max_dep = dept[i];
            mx_node = i;
        }
    }

    fill(dept.begin(), dept.end(),0);
    dfs(mx_node);
    max_dep = -1;
    for(int i = 1; i <= n; i++){
        if(dept[i] > max_dep){
            max_dep = dept[i];
            mx_node = i;
        }
    }
    cout << max_dep << endl;
    return 0;
}
