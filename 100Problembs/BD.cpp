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
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int a, b, target;
//    cin >> a >> b >> target;
//    bool dp[target + 1];
//    memset(dp, false, sizeof(dp));
//
//    int output = 0;
//    int curr = a;
//    while(curr <= target){
//        output = max(output, ((target - curr) / b) * b + (curr));
//        curr += a;
//    }
//    cout << output;
//}