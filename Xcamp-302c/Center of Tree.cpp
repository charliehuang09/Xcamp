//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#include <cmath>
//#include <unordered_set>
//#define ll long long
//using namespace std;
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int length;
//    cin >> length;
//    unordered_set<int> tree[length];
//    int degree[length];
//    memset(degree, 0, sizeof(degree));
//    unordered_set<int> nodes;
//    for(int i = 0; i < length - 1; i++){
//        int a, b;
//        cin >> a >> b;
//        a--;
//        b--;
//        tree[a].insert(b);
//        tree[b].insert(a);
//        degree[a]++;
//        degree[b]++;
//    }
//    unordered_set<int> leaves;
//    for (int i = 0; i < length; i++){
//        if (degree[i] <= 1){
//            leaves.insert(i);
//            degree[i] = 0;
//        }
//    }
//    int count = leaves.size();
//    while(count < length  -1 ){
//        unordered_set<int> newLeaves;
//        for (auto &itr : leaves){
//            for (auto &connection : tree[itr]){
//                degree[connection]--;
////                cout << connection << " ";
//                if (degree[connection] == 1){
//                    newLeaves.insert(connection);
//                }
//                degree[itr] = 0;
//            }
//        }
//        count += newLeaves.size();
//        leaves = newLeaves;
//    }
////    cout << endl;
//    int output = 2147483647;
//    for (auto &itr : leaves){
////        cout << itr << " ";
//        output = min(output, itr);
//    }
////    cout << output;
//    cout << output + 1;
////    cout << endl;
////    for (int i = 0; i < length; i++){
////        cout << degree[i];
////    }
//}
