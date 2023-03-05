//#include <iostream>
//#include <set>
//
//#define ll long long
//using namespace std;
//set<int> tree[1000000];
//int dp[1000000];
//int length;
//void dfs(int root, int par){
//    set<int> currConnections = tree[root];
//    int output = 0;
//    for (auto &itr : currConnections){
//        if (itr != par){
//            dfs(itr, root);
//            output += dp[itr];
//        }
//    }
//    dp[root] = output + 1;
//}
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> length;
//    for (int i = 0; i < length - 1; i++) {
//        int a, b;
//        cin >> a >> b;
//        tree[a].insert(b);
//        tree[b].insert(a);
//    }
//    dfs(1, -1);
//    for (int i = 1; i <= length; i++) {
//        cout << dp[i] << "\n";
//    }
//}