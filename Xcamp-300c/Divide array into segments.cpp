//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//ll length, segments;
//ll input[1000000];
//bool is_valid(ll x){
//    ll index = 0;
//    ll value = 0;
//    for (ll i = 0; i < segments - 1; i++){
//        value = 0;
//        while(value + input[index] <= x){
//            value += input[index];
//            index++;
//            if (index == length){//edge case
//                return true;
//            }
//        }
//    }
//    value = 0;
//    for (ll i = index; i < length; i++){
//        value += input[i];
//    }
//    if (value <= x){
//        return true;
//    }
//    return false;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll r = 0;
//    ll l = 0;
//    cin >> length >> segments;
//    for (ll i = 0; i < length; i++){
//        cin >> input[i];
//        r += input[i];
//    }
//
////    cout << is_valid(10);
//
//    while(r - l > 1){
//        ll mid = (r + l) / 2;
//        if (is_valid(mid)){
//            r = mid;
//        }
//        else{
//            l = mid;
//        }
//    }
//    r++;
//    while(is_valid(r - 1)){
//        r--;
//    }
//    cout << r;
//}