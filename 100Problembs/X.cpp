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
//const string albert = "Albert is a Furry\n";
//ll l, h, output = 0;
//
//void chosed(string num, string selected, string base){
//    num = num + selected;
//    while(stoll(num) <= h){
//        if (stoll(num) >= l && stoll(num) <= h){
//            output++;
//            // cout << num << "\n";
//        }
//        num = num + base;
//    }
//}
//
//void helper(string num, string base){
//    num = num + base;
//    if (stoll(num) >= h) return;
//    for (int i = 0; i <= 9; i++){
//        if (base != to_string(i)) chosed(num, to_string(i), base);
//    }
//    helper(num, base);
//}
//
//int main(){
//    cin >> l >> h;
//    // l = 0;
//    // h = 10000000000000000;
//    for (int i = 1; i <= 9; i++){
//        helper("", to_string(i));
//    }
//    for (int i = 1; i <= 9; i++){
//        for (int j = 0; j <= 9; j++){
//            if (i != j) chosed("", to_string(i), to_string(j));
//        }
//    }
////    chosed("", "1", "3");
//    cout << output;
//
//}
////110, 112, 113, 114, 115, 116,
//
////117, 118, 119, 121, 122, 131, and 133.