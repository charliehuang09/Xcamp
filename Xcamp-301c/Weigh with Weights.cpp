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
//const int weights[6] = {1, 2, 3, 5, 10, 20};
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int input;
//    bool cash[1001];
//    memset(cash, false, sizeof(cash));
//    for (int i = 0; i < 6; i++){
//        cin >> input;
//        for (int j = 0; j < input; j++){
//            for (int k = 1001 - weights[i]; k >= 0; k--){
//                if (cash[k]) cash[k + weights[i]] = true;
//            }
//        }
//        for (int j = 1; j <= input; j++) cash[weights[i] * j] = true;
////        if (input > 0) cash[weights[i]] = true;
//    }
//    int output = 0;
//    for (int i = 0; i <= 1000; i++)if (cash[i]) output++;
////    for (int i = 0; i <= 1000; i++) cout << cash[i] << " ";
//    cout << "\nTotal="<< output;
//}