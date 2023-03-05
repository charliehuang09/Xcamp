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
//struct node{
//    int l;
//    int r;
//};
//node tree[10000];
//void dfs(int root){
//    if (root == -1) return;
//    dfs(tree[root].l);
//    cout << root << " ";
//    dfs(tree[root].r);
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    for (int i = 1; i <= length; i++){
//        int a, b;
//        cin >> a >> b;
//        tree[i].l = a;
//        tree[i].r = b;
//    }
//    dfs(1);
//}