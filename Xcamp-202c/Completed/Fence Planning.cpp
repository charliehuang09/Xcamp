//#include <algorithm>
//#include <bitset>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <stack>
//#include <stdio.h>
//#include <stdlib.h>
//#include <vector>
//
//using namespace std;
//
//struct cow{
//    int x;
//    int y;
//    int parent;
//};
//
//struct coord{
//    int x;
//    int y;
//};
//
//vector<cow> parent;
//vector<int> r;
//
//int get_root(int input){
//    if (parent[input].parent == input){
//        return input;
//    }
//    parent[input].parent = get_root(parent[input].parent);
//    return parent[input].parent;
//}
//
//
//void unite(int x, int y){
//    int x_root = get_root(x);
//    int y_root = get_root(y);
//    if (r[x_root] == r[y_root]){
//        parent[x_root].parent = y_root;
//        r[y_root]++;
//    }
//    else if (r[x_root] < r[y_root]){
//        parent[x_root].parent = y_root;
//    }
//    else{
//        parent[y_root].parent = x_root;
//    }
//}
//
//bool check(coord max, coord min){
//    if (max.x == -1){
//        return false;
//    }
//    if (max.y == -1){
//        return false;
//    }
//    if (min.x == 2147483647){
//        return false;
//    }
//    if (min.y == 2147483647){
//        return false;
//    }
//    return true;
//}
//
//int main(){
//    int rooms, edges;
//    cin >> rooms >> edges;
//    int a,b;
//    vector<coord> size;
//    vector<coord> minimum;
//    coord empty;
//    coord max_template;
//    max_template.x = 2147483647;
//    max_template.y = 2147483647;
//    empty.x = -1;
//    empty.y = -1;
//    for (int i = 0; i < rooms; i++){
//         cin >> a >> b;
//         cow t;
//         t.x = a;
//         t.y = b;
//         t.parent = i;
//         parent.push_back(t);
//         r.push_back(0);
//         size.push_back(empty);
//         minimum.push_back(max_template);
//    }
//
//    for (int i = 0; i < edges; i++){
//        cin >> a >> b;
//        a--;
//        b--;
//        unite(a,b);
//    }
//
//    for (int i = 0; i < rooms; i++){
//        int root = get_root(i);
//        size[root].x = max(size[root].x, parent[i].x);
//        size[root].y = max(size[root].y, parent[i].y);
//        minimum[root].x = min(minimum[root].x, parent[i].x);
//        minimum[root].y = min(minimum[root].y, parent[i].y);
//    }
//
////    for (auto &i:size){
////        cout << i.x << " " << i.y << "\n";
////    }
////    cout << "\n\n";
////
////    for (auto &i:minimum){
////        cout << i.x << " " << i.y << "\n";
////    }
////    cout << "\n";
//    int output = 2147483647;
//    for (int i = 0; i < rooms; i++){
//        if (output > ((size[i].x - minimum[i].x) + (size[i].y - minimum[i].y)) * 2 && check(size[i], minimum[i])){
//            output = ((size[i].x - minimum[i].x) + (size[i].y - minimum[i].y)) * 2;
////            cout << output;
//        }
//    }
//    cout << output;
//
//
//}