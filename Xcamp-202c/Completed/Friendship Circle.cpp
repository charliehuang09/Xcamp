//#include <iostream>
//#include <vector>
//#include <set>
//using namespace std;
//vector<vector<int>> input;
//int length;
//vector<int> friends;
//void reset(int length){
//    friends.clear();
//    for (int i = 0; i < length; i++){
//        friends.push_back(0);
//    }
//}
//void dfs(int col){
//    for (int i = 0; i < length; i++){
//        if (input[col][i] == 1 && friends[i] == 0){
//            friends[i] = 1;
//            dfs(i);
//        }
//    }
//}
//int main() {
//    cin >> length;
//    vector<int> t1;
//    int t2;
//    for (int i = 0; i < length; i++){
//        t1.clear();
//        for (int j = 0; j < length; j++){
//            cin >> t2;
//            t1.push_back(t2);
//        }
//        input.push_back(t1);
//    }
//    cout << "\n\n\n\n";
//    for (int i = 0; i < length; i++){
//        reset(length);
//        dfs(i);
//        input[i] = friends;
////        for (int j = 0; j < length; j++){
////            cout << input[i][j] << " ";
////        }
////        cout << "\n\n";
//    }
//    set<vector<int>> set;
//    for (int i = 0; i < length; i++){
//        set.insert(input[i]);
//    }
//    cout << set.size();
//}
