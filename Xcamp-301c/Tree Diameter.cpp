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
//const ll NODES = 10000000;
//ll int d;
//ll int p;
//vector<int> tree[NODES];
//void dfs(ll root, ll parent, ll steps){
//    if (steps > d){
//        d = steps;
//        p = root;
//    }
//    for (ll i = 0; i < tree[root].size(); i++){
//        if (tree[root][i] != parent) dfs(tree[root][i], root, steps + 1);
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll length, a, b;
//    cin >> length;
//    if (length <= 1){
//        cout << 0;
//        return 0;
//    }
//    for (ll i = 0; i < length - 1; i++){
//        cin >> a >> b;
//        tree[a].push_back(b);
//        tree[b].push_back(a);
//    }
//    dfs(a, -1, 0);
////    cout << d << " " << p << " " << a << "\n";
//    dfs(p, -1, 0);
//    cout << d;
//}