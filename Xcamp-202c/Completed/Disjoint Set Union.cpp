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
//vector<int> parent;
//vector<int> r;
//
//int getroot(int input){
//    if (parent[input] == input){
//        return input;
//    }
//    parent[input] = getroot(parent[input]);
//    return parent[input];
//}
//
//void unite(int x, int y) {
//    int x_root = getroot(x);
//    int y_root = getroot(y);
//    if (r[x_root] == r[y_root]) {
//        parent[x_root] = y_root;
//        r[y_root] ++;
//    } else if (r[x_root] < r[y_root]) {
//        parent[x_root] = y_root;
//    } else parent[y_root] = x_root;
//
//}
//
//bool check(int x, int y){
//    int x_root = getroot(x);
//    int y_root = getroot(y);
//    return x_root == y_root;
//}
//
//int main(){
//    int length, operations;
//    scanf("%d", &length);
//    scanf("%d", &operations);
//    for (int i = 0; i < length; i++){
//        parent.push_back(i);
//        r.push_back(0);
//    }
//
//    int a, b, c;
//    for (int i = 0; i < operations; i++){
//        scanf("%d", &a);
//        scanf("%d", &b);
//        scanf("%d", &c);
//        if (a == 1){
//            //merge
//            unite(b - 1,c - 1);
//        }
//        if (a == 2){
//            //check
//            if (check(b - 1,c - 1)){
//                printf("Y\n");
//            }
//            else{
//                printf("N\n");
//            }
//        }
//    }
//}