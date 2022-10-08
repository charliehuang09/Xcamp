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
//    int input;
//    int cash[target + 1];
//    memset(cash, 0, sizeof(cash));
//    for (int i = 0; i < length; i++){
//        cin >> input;
//        for (int j = target; j >= input; j--){
//            cash[j]= max(cash[j], cash[j  - input] + input);
//        }
//    }
//    cout << target - cash[target];
//}