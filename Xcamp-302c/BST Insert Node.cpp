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
//struct node{
//    int l;
//    int r;
//    int v;
//};
//node tree[10000];
//int idx = 1;
//void insert(int root, int v){
//    if (tree[root].v == 0){
//        tree[root].v = v;
//        idx++;
//        return;
//    }
//    if (tree[root].v > v){
//        if (tree[root].l == 0){
//            tree[root].l = idx;
//            insert(idx, v);
//        }
//        else insert(tree[root].l, v);
//        return;
//    }
//    else{
//        if (tree[root].r == 0){
//            tree[root].r = idx;
//            insert(idx, v);
//        }
//        else insert(tree[root].r, v);
//        return;
//    }
//}
//void precedence(int root, int v){
//    if (v > tree[root].v){
//    }
//    else{
//        precedence(tree[root].l, v);
//    }
//}
//void successor(int root, int v){
//}
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        int a, b;
//        cin >> a >> b;
//        if (a == 1) insert(0, b);
//        if (a == 5) precedence(0, b);
//        if (a == 6) successor(0, b);
////        cout << i;
//    }
//
//    return 0;
//}