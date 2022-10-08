//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <unordered_map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//struct item{
//    int value;
//    int cost;
//};
//
//int main(){
//    int length, target, output = 0;
//    cin >> length >> target;
//    item input[length];
//    int cash[1000000];// cost, value
//    memset(cash, 0, sizeof(cash));
//    for (int i = 0; i < length; i++) cin >> input[i].cost;
//    for (int i = 0; i < length; i++) cin >> input[i].value;
//    for (int i = 0; i < length; i++){
//        for (int j = target; j >= 0; j--){
//            cash[j + input[i].cost] = max(cash[j + input[i].cost], input[i].value + cash[j]);
//            if (j + input[i].cost <= target) output = max(output, cash[j + input[i].cost]);
//        }
//    }
//    for (int i = 0; i < 50; i++){
//        cout << cash[i] << " ";
//    }
//    cout << "\n";
//    cout << output;
//}
