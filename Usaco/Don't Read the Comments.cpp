//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <stack>
//
//#define ll long long
//using namespace std;
//const string base = "n/a";
//map<string, vector<string>> adj;
//map<string, string> msg;
//void dfs(string root, int depth){
//    for (int i = 0; i < depth; i++) cout << " | ";
//    cout << msg[root] << "\n";
//    for (int i = 0; i < adj[root].size(); i++){
//        dfs(adj[root][i], depth + 1);
//    }
//}
//
//void solve() {
//    adj.clear();
//    msg.clear();
//    int length;
//    cin >> length;
//    string a, b, c;
//    for (int i = 0; i < length; i++) {
//        cin >> a >> b;
//        cin.ignore();
//        getline(cin, c);
//        c = c.substr(1, c.size()-2);
//        adj[b].push_back(a);
//        msg[a] = c;
//    }
//    dfs(base, -1);
//
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++) {
//        solve();
//    }
//
//}