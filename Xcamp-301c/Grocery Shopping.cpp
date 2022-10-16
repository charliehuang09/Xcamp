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
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int target, crab, vegetable;
//    cin >> target >> crab >> vegetable;
//    int cash[target + 1];
//    memset(cash, 0, sizeof(cash));
//    for (int i = 0; i < crab; i++){
//        int c, v;
//        cin >> c >> v;
//        cash[c] = max(cash[c], v);
//        for (int j = c; j <= target; j++){
//            cash[j] = max(cash[j], v);
//        }
//    }
//    for (int i = 0; i < vegetable; i++){
//        int c, v;
//        cin >> c >> v;
//        for (int j = target - c; j >= 0; j--){
//            cash[j + c] = max(cash[j + c], cash[j] + v);
//        }
//    }
//    cout << cash[target] << "\n";
//}