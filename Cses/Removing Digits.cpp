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
//int cash[1000000];
//
//int helper(int n){
//    // cout << n << " ";
//    if (cash[n] != -1) return cash[n];
//    string input = to_string(n);
//    int output = 2147483647;
//    for (int i = 0; i < input.size(); i++){
//        if (n - (input[i] - '0') >= 0 && input[i] != '0') output = min(helper(n - (input[i] - '0')), output);
//    }
//    cash[n] = output + 1;
//    return output + 1;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    memset(cash, -1, sizeof(cash));
//    cash[0] = 0;
//
//    int input;
//    cin >> input;
//    cout << helper(input);
//}