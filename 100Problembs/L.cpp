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
//const string albert = "Albert is a Furry\n";
//int main(){
//    ll input;
//    cin >> input;
//    vector<ll> dp;
//    dp.push_back(1);
//    dp.push_back(2);
//    dp.push_back(4);
//    if (input <= 3){
//        cout << dp[input-1];
//        return 0;
//    }
//    for (ll i = 0; i < input - 3; i++){
//        //cout << dp[dp.size() - 1] + dp[dp.size() - 2] + dp[dp.size() - 3] << " ";
//        dp.push_back((dp[dp.size() - 1] + dp[dp.size() - 2] + dp[dp.size() - 3]) % 998244353);
//        // cout << dp[0] << dp[1] << dp[2] << "\n";
//    }
//    cout << dp[dp.size() - 1] % 998244353;
//}