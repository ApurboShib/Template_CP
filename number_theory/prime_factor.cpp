#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int spf[N];

void seive() {
    for(int i = 2; i < N; i++) {
        spf[i] = i;  // Initialize spf[i] to i (a prime is its own smallest prime factor)
    }
    for(int i = 2; i * i < N; i++) {
        if(spf[i] == i) {  // i is prime
            for(int j = i * i; j < N; j += i) {
                if(spf[j] == j) spf[j] = i;  // Mark smallest prime factor
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    seive();
    int n;
    cin >> n;
    while(n > 1) {
        int p = spf[n];  // Get smallest prime factor of n
        int cnt = 0;
        while(n % p == 0) {
            n /= p;
            cnt++;
        }
        for(int i = 0; i < cnt; i++) {
            cout << p << endl;
        }
    }
    return 0;
}