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
//int n, dp[1001], v[1001];
////sum, value
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    memset(dp, 0, sizeof(dp));
//    memset(v, 0, sizeof(v));
//    cin >> n;
//    for (int i = 1; i < n; i++){
//        for (int j = 1; j <= i; j++){
//            if (i % j == 0){
//                v[i]++;
//            }
//        }
//    }
//    int output = 0;
//    for (int i = 1; i <= n; i++){
//        for (int j = n - i; j >= 0; j--){
//            dp[j + i] = max(dp[j + i], dp[j] + v[i]);
//            output = max(output, dp[j] + v[i]);
//        }
//    }
//    cout << output;
//
//}