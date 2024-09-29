#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
   	cin >> a[i];
   }

   int pref[n];
   for(int i = 1; i < n; i++) {
   	pref[i] = a[i] + pref[i - 1];
   }

   int sum = 0;

   int q;
   cin >> q;
   while(q--) {
   	int l, r;
   	cin >> l >> r;
   	sum = pref[r] - pref[l - 1];

   	cout << sum << endl;
   }
   
}
