#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int N = 1e5 + 9;

signed main(){

 ios::sync_with_stdio(false);
 cin.tie(nullptr);

 set<int> se;
 int n;
 cin >> n;

 for(int i = 1; i * i <= n; i++){
 	if(n % i == 0){
 		se.insert(i);
 		if(i != n/i){
 			se.insert(n/i);
 		}
 	}
 }
 for(auto x : se) cout << x << endl;

 return 0;
}
