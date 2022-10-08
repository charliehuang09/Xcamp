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
//    int length, target;
//    cin >> length >> target;
//    bool cash[target + 1];
//    int input;
//    memset(cash, false, sizeof(cash));
//    for (int i = 0; i < length; i++){
//        cin >> input;
//        for (int j = target; j >= 0; j--){
//            if (cash[j] && j + input <= target) cash[j + input] = true;
//        }
//        cash[input] = true;
//    }
//
//    if (cash[target]) cout << "yes";
//    else cout << "no";
//}