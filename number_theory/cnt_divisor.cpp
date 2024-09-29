#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;
int spf[N];
void sieve(){
    for(int i = 2; i< N; i++){
        if(spf[i] == 0){
            for(int j = i; j < N; j+=i){
                if(spf[j] == 0) spf[j] = i;
            }
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    cin >> n;
    map<int, int> mp;
    while(n > 1){
        int p = spf[n];
        while(n % p == 0){
            mp[p]++;
            n/=p;
        }
    }

    int no_div = 1;
    int sum_div = 1;
    for(auto x  : mp){
        // calculate the number of divisor/
        no_div *= (x.second + 1);
        
    }

    cout << "Number of divisors: " << no_div << endl;
    

    return 0;
}
