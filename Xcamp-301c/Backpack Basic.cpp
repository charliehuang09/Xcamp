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
//    cin >> target >> length;
//    item input[length];
//    map<int, int> cash;// cost, value
//    for (int i = 0; i < length; i++) cin >> input[i].cost >> input[i].value;
//    for (int i = 0; i < length; i++){
//        vector<item> curr;
//        // cash[input[i].cost] = max(cash[input[i].cost], input[i].value);
//        for (auto itr : cash){
//            if (itr.first + input[i].cost <= target && cash[itr.first + input[i].cost] < itr.second + input[i].value){
//                item temp;
//                temp.cost = itr.first + input[i].cost;
//                temp.value = itr.second + input[i].value;
//                curr.push_back(temp);
//            }
//        }
//        cash[input[i].cost] = max(cash[input[i].cost], input[i].value);
//        for (int i = 0; i < curr.size(); i++) cash[curr[i].cost] = curr[i].value;
//    }
////    for (auto itr : cash) cout << itr.first << " " << itr.second << "\n";
//    for (auto itr : cash) if (itr.first <= target) output = max(output, itr.second);
//    cout << output;
//}
