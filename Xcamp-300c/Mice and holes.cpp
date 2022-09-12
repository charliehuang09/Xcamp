//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll mice_len, holes_len, t;
//    cin >> mice_len >> holes_len;
//    vector<ll> mice;
//    vector<ll> holes;
//
//    for (ll i = 0; i < mice_len; i++){
//        cin >> t;
//        mice.push_back(t);
//    }
//    for (ll i = 0; i < holes_len; i++){
//        cin >> t;
//        holes.push_back(t);
//    }
////    sort(mice.begin(), mice.end());
//    sort(holes.begin(), holes.end(), greater <ll int>());
//    ll output = 0;
//    for (ll i = 0; i < mice_len; i++){
//        auto lower= lower_bound(holes.begin(), holes.end(), mice[i], greater<ll int>());
//        ll index = distance(holes.begin(), lower);
//        output += mice[i] - holes[index];
//        holes.erase(holes.begin() + index);
////        cout << mice[i] << " " << index << "\n";
//    }
//    cout << output;
//}