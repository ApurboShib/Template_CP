
// find the number of common divisor in a array..

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int N = 1e5 + 9;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 1; i<=n; i++){
        ll x; cin >> x;
        ans = __gcd(ans,x);
    }
    ll cnt = 0;
    for(ll i = 1; i * i <=ans; i++){
        if(ans % i == 0){
            cnt++;
        }
        if(i != ans/i){
            cnt++;
        }
    }
    cout << cnt << endl;
    
    return 0;
}
