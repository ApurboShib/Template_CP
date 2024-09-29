#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<long long> tree(4 * N);
vector<long long> v(N);

void build_tree(int node, int b, int e) {
    if (b == e) {
        tree[node] = v[b];
    } else {
        int mid = (b + e) / 2;
        build_tree(2 * node + 1, b, mid);
        build_tree(2 * node + 2, mid + 1, e);
        tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
    }
}

void update_tree(int node, int b, int e, int indx, int val) {
    if (b > indx || e < indx) {
        return;
    }
    if (b == e && b == indx) {
        tree[node] = val;
        return;
    }
    int mid = (b + e) / 2;
    update_tree(2 * node + 1, b, mid, indx, val);
    update_tree(2 * node + 2, mid + 1, e, indx, val);
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
}

long long query_tree(int node, int b, int e, int l, int r) {
    if (b > r || e < l) {
        return 0;
    }
    if (b >= l && e <= r) {
        return tree[node];
    }
    int mid = (b + e) / 2;
    return query_tree(2 * node + 1, b, mid, l, r) + query_tree(2 * node + 2, mid + 1, e, l, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    build_tree(0, 0, n - 1);

    while (m--) {
        int op;
        cin >> op;

        if (op == 1) {
            int i, v;
            cin >> i >> v;
            update_tree(0, 0, n - 1, i, v);
        } else  {
            int l, r;
            cin >> l >> r;
           cout <<  query_tree(0, 0, n - 1, l, r - 1)<<endl;
       
        }
    }

    return 0;
}
