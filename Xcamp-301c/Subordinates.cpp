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
//vector<int> tree[100000];
//int dp[100000];
//int dfs(int root){
//    if (tree[root].size() == 0) return 1;
//    int output = 0;
//    for (int i = 0; i < tree[root].size(); i++) output += dfs(tree[root][i]);
//    dp[root] = output;
//    return output + 1;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    int t;
//    for (int i = 0; i < length - 1; i++){
//        cin >> t;
//        tree[t - 1].push_back(i+1);
//    }
//
//
//    dfs(0);
//    for (int i = 0; i < length; i++){
//        cout << dp[i] << " ";
//    }
//
//    return 0;
//}