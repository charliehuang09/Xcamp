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
//ll d, c;
//
//bool check(vector<ll> input, ll k){
//    ll sum = 0;
//    if (k + 1 <= 0) return true;
////    cout << k + 1  << endl;
//    ll cycle = d / (k + 1);
//    ll loop = k + 1;
//    if (loop > input.size()) loop = input.size();
//    for (ll i = 0; i < loop; i++){
//        sum += input[i] * cycle;
//    }
//    for (ll i = 0; i < d % (k + 1); i++){
//        sum += input[i];
//    }
//    if (sum >= c) return true;
//    return false;
//}
//
//void solve(){
//    ll length;
//    cin >> length >> c >> d;
//    vector<ll> input(length);
//    for (ll i = 0; i < length; i++) cin >> input[i];
//    sort(input.begin(), input.end(), greater<ll>());
//    ll l = 1;
//    ll h = d;
//    while(l < h){
//        ll midpoint = (l + h) / 2;
//        if (check(input, midpoint)){
//            l = midpoint + 1;
//        }
//        else{
//            h = midpoint;
//        }
//    }
//    h++;
//    while(!check(input, h) && h >= 0) h--;
//    if (h == -1){
//        cout << "Impossible\n";
//        return;
//    }
//    if (h > d){
//        cout << "Infinity\n";
//        return;
//    }
//    cout << h << "\n";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    ll length;
//    cin >> length;
//    for (ll i = 0; i < length; i++){
//        solve();
//    }
//}