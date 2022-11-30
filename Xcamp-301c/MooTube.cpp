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
//    int id;
//    int v;
//    item(int a, int b){
//        id = a;
//        v = b;
//    }
//};
//int output;
//vector<item> tree[1000000];
//void helper(int root, int parent, int c){
//    output++;
//    int a, b;
//    for (int i = 0; i < tree[root].size(); i++){
//        a = tree[root][i].v;
//        if (tree[root][i].id != parent && tree[root][i].v >= c){
//            helper(tree[root][i].id, root, c);
//        }
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length, q, a, b, c;
//    cin >> length >> q;
//    for (int i = 0; i < length - 1; i++){
//        cin >> a >> b >> c;
//        tree[a].push_back(item(b, c));
//        tree[b].push_back(item(a, c));
//    }
//
//    for (int i = 0; i < q; i++){
//        cin >> b >> a;
//        output = -1;
//        helper(a, -1, b);
//        cout << output << "\n";
//    }
//}