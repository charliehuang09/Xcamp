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
//vector<int> tree[1000000];
//int output[1000000];
//int node = 0;
//int maxDepth = 0;
//
//void dfs(int root, int parent, int depth){
//     if (maxDepth < depth){
//         node = root;
//         maxDepth = depth;
//     }
//     for (int i = 0; i < tree[root].size(); i++){
//         if (tree[root][i] != parent){
//             dfs(tree[root][i], root, depth + 1);
//         }
//     }
//}
//
//void dfs1(int root, int parent, int depth){
//    output[root] = max(output[root], depth);
//    for (int i = 0; i < tree[root].size(); i++){
//        if (tree[root][i] != parent){
//            dfs1(tree[root][i], root, depth + 1);
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    int a, b;
//    for (int i = 0; i < length - 1; i++){
//        cin >> a >> b;
//        tree[a].push_back(b);
//        tree[b].push_back(a);
//    }
//
//    dfs(1, -1, 0);
//    int point1 = node;
//    maxDepth = 0;
//    dfs(point1, -1, 0);
//    int point2 = node;
//    dfs1(point1, -1, 0);
//    dfs1(point2, -1, 0);
//    for (int i = 1; i <= length; i++){
//        cout << output[i] << " ";
//    }
//}