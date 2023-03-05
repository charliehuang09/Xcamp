//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//// #define INT_MAX 2147483647
//#define ll long long
//using namespace std;
//int tree[1000][1000];
//int out[1000][1000];
//int length;
//void lca(int root, int cur, int depth,  int par){
//    for (int i = 0; i < length; i++){
//        if (tree[cur][i] == 1 && i != par){
//            out[root][cur] = depth;
//            lca(root, i, depth + 1, cur);
//        }
//    }
//    out[root][cur] = depth;
//}
//void print(){
//    for (int i = 0; i < length; i++){
//        for (int j = 0; j < length; j++){
//            cout << out[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> length;
//    string t;
//    for (int i = 0; i < length; i++){
//        cin >> t;
//        for (int j = 0; j < length; j++){
//            if (t[j] == '1'){
//                tree[i][j] = 1;
//                tree[j][i] = 1;
//            }
//        }
//    }
//    for (int i = 0; i < length; i++){
//        lca(i, i, 0, -1);
//        // print();
//    }
//    print();
//}