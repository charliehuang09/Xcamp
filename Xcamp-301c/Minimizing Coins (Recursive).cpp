//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//#define int_min -2147483647
//#define int_max 2147483647
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//ll cash[10000000];
//vector<ll> input;
//ll length, target;
//
//ll helper(ll n){
//    if (n == 0) return 0;
//    if (n < 0) return int_max;
//    if (cash[n] != -1) return cash[n];
//    ll output = int_max;
//    for (ll i = 0; i < length; i++){
//        output = min(output, helper(n - input[i]) + 1);
//    }
//    cash[n] = output;
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    memset(cash, -1, sizeof(cash));
//    ll t;
//    cin >> length >> target;
//    for (ll i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//    int output = helper(target);
//    if (output >= int_max) cout << -1;
//    else cout << output;
//}
////o(n * length * target)
////o(n ^ 2)