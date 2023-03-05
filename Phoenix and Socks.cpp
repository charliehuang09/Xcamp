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
//void solve() {
//    map<int, pair<int, int>> m;
//    int length, f, s, t;
//    int output = 0;
//    cin >> length >> f >> s;
//    int input[length][2];
//    for (int i = 0; i < f; i++) {
//        cin >> t;
//        m[t].first++;
//    }
//    for (int i = 0; i < s; i++) {
//        cin >> t;
//        m[t].second++;
//    }
//    //match
//    for (auto i: m){
//        while(m[i.first].first > 0 && m[i.first].second > 0) {
//            m[i.first].first--;
//            m[i.first].second--;
//        }
//    }
////    exit(0);
//    //color
//    int l = 0;
//    int r = 0;
//    for (auto i : m){
//        l += i.second.first;
//        r += i.second.second;
//    }
////    cout << l << " " << r;
//    while(l > 0 && r > 0){
//        l--;
//        r--;
//        output++;
//    }
//    //side
//    for (auto i : m){
//        while(i.second.first >= 2){
//            i.second.first -= 2;
//            output++;
//            cout << i.first;
//        }
//        while(i.second.second >= 2){
//            i.second.second -= 2;
//            output++;
//            cout << i.first;
//        }
//    }
//    output += l;
//    output += r;
//    cout << output << endl;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++) solve();
//}