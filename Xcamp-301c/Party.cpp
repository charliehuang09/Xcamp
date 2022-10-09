//
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
//struct item{
//    int value;
//    int quantity;
//    int price;
//};
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length, budget;
//    cin >> length >> budget;
//    int dp[budget + 1];
//    memset(dp, 0, sizeof(dp));
//    int price, value, quantity;
//    vector<int> adj[budget + 1];
//    for (int i = 0; i < length; i++){
//        cin >> price >> value >> quantity;
//        price *= quantity;
//        value *= quantity;
//        for (int j = budget; j >= price; j--){
//            if (dp[j] < dp[j - price] + value){
//                dp[j] = dp[j - price] + value;
//                adj[j] = adj[j - price];
//                adj[j].push_back(i + 1);
//            }
//        }
//    }
//
//    cout << dp[budget];
//    cout << "\n";
//    for (int i = 0; i < adj[budget].size(); i++) cout << adj[budget][i] << " ";
//}