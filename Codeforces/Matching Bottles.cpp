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
//void solve(){
//    int length, l, r, t;
//    cin >> length >> l >> r;
//    int input[length][2];
//    memset(input, 0, sizeof(input));
//    for (int i = 0; i < l; i++){
//        cin >> t;
//        t--;
//        input[t][0]++;
//    }
//    for (int i = 0; i < r; i++){
//        cin >> t;
//        t--;
//        input[t][1]++;
//    }
//    for (int i = 0; i < length; i++){
//        if (input[i][0] > 0 && input[i][1] > 0){
//            input[i][0] -= min(input[i][0], input[i][1]);
//            input[i][1] -= min(input[i][0], input[i][1]);
//        }
//    }
//    for (int i = 0; i < length; i++){
//        bool done = false;
//        while(input[i][0] >= 2){
//            done = true;
//            input[i][0]--;
//            input[i][1]++;
//        }
//        while(input[i][1] >= 2 && !done){
//            input[i][1]--;
//            input[i][0]++;
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        solve();
//    }
//}