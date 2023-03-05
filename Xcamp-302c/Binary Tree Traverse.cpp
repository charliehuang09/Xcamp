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
//    int v;
//    int r;
//    int l;
//};
//node tree[100000];
//
//void preorder(int root){
//    if (root == -1) return;
//    cout << tree[root].v << " ";
//    preorder(tree[root].l);
//    preorder(tree[root].r);
//}
//void inorder(int root){
//    if (root == -1) return;
//    inorder(tree[root].l);
//    cout << tree[root].v << " ";
//    inorder(tree[root].r);
//}
//void postorder(int root){
//    if (root == -1) return;
//    postorder(tree[root].l);
//    postorder(tree[root].r);
//    cout << tree[root].v << " ";
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    for (int i = 0; i < length; i++){
//        int v, l, r;
//        cin >> v >> l >> r;
//        l--;
//        r--;
//        tree[i].r = r;
//        tree[i].l = l;
//        tree[i].v = v;
//    }
//    preorder(0);
//    cout << "\n";
//    inorder(0);
//    cout << "\n";
//    postorder(0);
//
//}