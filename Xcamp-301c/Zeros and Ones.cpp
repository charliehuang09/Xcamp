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
//    int length, z, o;
//    cin >> length >> z >> o;
//    int dp[z + 1][o + 1];
//    memset(dp, 0, sizeof(dp));
//    int output = 0;
//    string t;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        int zero = 0;
//        int one = 0;
//        for (int j = 0; j < t.size(); j++){
//            if (t[j] == '0') zero++;
//            else one++;
//        }
//        for (int j = z - zero; j >= 0; j--){
//            for (int k = o - one; k >= 0; k--){
//                if (dp[j][k] != -1){
//                    dp[j + zero][k + one] = max(dp[j + zero][k + one], dp[j][k] + zero + one);
//                    output = max(output, dp[j + zero][k + one]);
//                }
//            }
//        }
//        dp[zero][one] = zero + one;
////        break;
//    }
//    for (int i = 0; i <= z; i++){
//        for (int j = 0; j <= o; j++){
//            cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << output;
//}