// fast exponeiantation with MOD.

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

int power(int x, int n, int mod) {
    int ans = 1;
    x %= mod; // Ensure x is within the range [0, mod-1]
    while (n > 0) {
        if (n & 1) {
            ans = (1LL * ans * x) % mod;
        }
        x = (1LL * x * x) % mod;
        n >>= 1; // Equivalent to n /= 2
    }
    return ans;
}


signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

cout << power(3, 6, 10000);
 

 return 0;
}
