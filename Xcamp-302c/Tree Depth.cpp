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
//
//int max_depth = 0;
//set<int> tree[100000];
//
//void dfs(int root, int depth, int par){
//    set<int> curr = tree[root];
//    max_depth = max(max_depth, depth);
//    for (auto &itr : curr){
//        if (itr != par) dfs(itr, depth + 1, root);
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    string t;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        for (int j = 0; j < length; j++){
//            if (t[j] == '1'){
//                tree[i].insert(j);
//                tree[j].insert(i);
//            }
//        }
//    }
//    dfs(0, 0, -1);
//    cout << max_depth << endl;
//}