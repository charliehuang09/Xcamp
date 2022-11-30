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
//struct format{
//    vector<int> c;
//    int v;
//    int p;
//};
//
//vector<format> tree;
//format temp;
//
//void why_is_input_so_hard(int prev){
//    int a, b;
//    cin >> a >> b;
//    tree[prev].c.push_back(a);
//    tree.push_back(temp);
//    tree[tree.size() - 1].v = a;
//    tree[tree.size() - 1].p = b;
//    if (b != 0) return;
//    int t = tree.size() - 1;
//    why_is_input_so_hard(t);
//    why_is_input_so_hard(t);
//}
//
//void solve(int root, int time){
//    if (tree[root].p != 0) return;
//    solve(tree[root].c[0], time - (tree[root].v*2));
//    solve(tree[root].c[1], time - (tree[root].v*2));
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    tree.push_back(temp);
//    why_is_input_so_hard(0);
//
//
//    return 0;
//}