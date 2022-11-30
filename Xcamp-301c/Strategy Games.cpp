//#include <iostream>
//#include <vector>
//#include <set>
//
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//vector<int> tree[100000];
//int first = 0;
//int second = 0;
//
//void even(int root);
//
//void odd(int root) {
//    first++;
//    for (int i = 0; i < tree[root].size(); i++) {
//        even(tree[root][i]);
//    }
//}
//void even(int root){
//    second++;
//    for (int i = 0; i < tree[root].size(); i++){
//        odd(tree[root][i]);
//    }
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int length;
//    cin >> length;
//    int t1, t2, _;
//    for (int i = 0; i < length; i++){
//        cin >> t1 >> t1;
//        for (int j = 0; j < t1; j++){
//            cin >> t2;
//            tree[i].push_back(t2);
//        }
//    }
//    odd(0);
////    cout << first << " " << second;
//    cout << min(first, second);
//    return 0;
//}