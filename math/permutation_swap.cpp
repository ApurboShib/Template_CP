#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int32_t main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t;
   cin >> t;
   while(t--) {
   int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++) {
   	cin >> a[i];
   }

   int ans = 0;
   for(int i = 0; i < n; i++) {
   	ans = __gcd(ans, abs(a[i] - i - 1));
   }

   cout << ans << endl;
}
	return 0;
   
}
