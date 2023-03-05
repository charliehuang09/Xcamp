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
//struct format{
//    ll time;
//    ll value;
//};
//
//bool compare(format a, format b){
//    if (a.time == b.time) return a.value > b.value;
//    return a.time > b.time;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll pathLength, length, b, j;
//    cin >> pathLength >> length >> b >> j;
//    format input[length];
//    for (ll i = 0; i < length; i++){
//        cin >> input[i].time;
//        cin >> input[i].value;
//    }
//    sort(input, input + length, compare);
//
//    vector<format> used;
//    ll m = 0;
//    for (ll i = 0; i < length; i++){
//        if (input[i].value > m) used.push_back(input[i]);
//        m = max(m, input[i].value);
//    }
//    reverse(used.begin(), used.end());
//    ll prev = 0;
//    ll output = 0;
//    for (ll i = 0; i < used.size(); i++){
//        ll time = (b - j) * (used[i].time - prev);
//        output += time * used[i].value;
//        prev = used[i].time;
//    }
//
//    cout << output;
//
//    return 0;
//}
