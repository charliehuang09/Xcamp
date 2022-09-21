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
//const int mod = 1000000007;
//vector<int> input;
//int target;
//int cash[1000000];
//
//int helper(int n){
//    if (n == target)return 1;
//    if (n > target) return 0;
//    if (cash[n] != -1) return cash[n];
//    int output = 0;
//    for (int i = 0; i < input.size(); i++){
//        output += helper(n + input[i]);
//        output %= mod;
//    }
//    cash[n] = output;
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, t;
//    memset(cash, -1, sizeof(cash));
//    cin >> length >> target;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        input.push_back(t);
//    }
//    cout << helper(0);
//}