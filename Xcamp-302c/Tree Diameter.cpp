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
//int max_node = -1;
//set<int> tree[1000005];
//
//void dfs(int root, int depth, int par){
//    set<int> curr = tree[root];
//    if (max_depth < depth){
//        max_depth = depth;
//        max_node = root;
//    }
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
//    int t1, t2;
//    cin >> length;
//    for (int i = 0; i < length - 1; i++){
//        cin >> t1 >> t2;
//        tree[t1].insert(t2);
//        tree[t2].insert(t1);
//    }
//    dfs(1, 0, -1);
////    cout << max_depth << endl;
//    max_depth = 0;
//    dfs(max_node, 0, -1);
//    cout << max_depth << endl;
//}