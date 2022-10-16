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
//
//struct s{
//    string str;
//    int cash;
//};
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    s input;
//    s cash[length];
//    int output = 0;
//    for (int i = 0; i < length; i++){
//        cin >> input.str;
//        input.cash = 1;
//        for (int j = 0; j < i; j++){
//            if (input.str.find(cash[j].str) != string::npos){
//                input.cash = max(input.cash, cash[j].cash + 1);
//                continue;
//            }
//        }
//        cash[i] = input;
//        output = max(output, input.cash);
//    }
//    cout << output;
//}