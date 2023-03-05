//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#define ll long long
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(nullptr);
//
//    ll n, e, k;
//    cin >> n >> e >> k;
//    e--;
//
//    ll dp[n][k + 1];
//    memset(dp, 0, sizeof(dp));
//
//    dp[0][0] = 1;
//    for (ll i = 1; i <= k; i++) {
//        for (ll j = 0; j < n; j++) {
//            ll one = (j + 1) % n;
//            ll two = (j - 1 + n) % n;
//            if (one != e) {
//                dp[j][i] += dp[one][i - 1];
//            }
//            if (two != e) {
//                dp[j][i] += dp[two][i - 1];
//            }
//            dp[j][i] %= (ll)(1e9 + 7);
//        }
//    }
//
//    ll sum = 0;
//    for (ll i = 1; i <= k; i++) {
//        sum += dp[e][i];
//        sum %= (ll)(1e9 + 7);
//    }
//    cout << sum << '\n';
//}