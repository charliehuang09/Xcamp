//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//ll cash[10000000];
//vector<ll> input;
//ll length, target;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    memset(cash, -1, sizeof(cash));
//    ll t;
//    cin >> length >> target;
//    for (ll i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//    cash[0] = 0;
////    cout << "0 ";
//    for (ll i = 1; i <= target; i++){
//        ll output = 2147483647;
//        for (ll j = 0; j < length; j++){
//            if (i - input[j] >= 0){
//                output = min(output, cash[i - input[j]] + 1);
//            }
//        }
//        cash[i] = output;
////        cout << output << " ";
//    }
//    if (cash[target] == 2147483647) cout << -1;
//    else cout << cash[target];
//}
////o(n * length * target)
////o(n ^ 2)