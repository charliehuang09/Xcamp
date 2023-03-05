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
//const string albert = "Albert is a Furry\n";
//string input[3];
//
//int solve(char a, char b){
//    for (int i = 0; i < 3; i++){
//        bool vert = true;
//        bool horiz = true;
//        for (int j = 0; j < 3; j++){
//            if (input[i][j] != a && input[i][j] != b) vert = false;
//            if (input[j][i] != a && input[j][i] != b) horiz = false;
//        }
//        if (vert){
//            bool isa = false;
//            bool isb = false;
//            for (int j = 0; j < 3; j++){
//                if (input[i][j] == a) isa = true;
//                if (input[i][j] == b) isb = true;
//            }
//            if (isa && isb) return 1;
//        }
//        if (horiz){
//            bool isa = false;
//            bool isb = false;
//            for (int j = 0; j < 3; j++){
//                if (input[j][i] == a) isa = true;
//                if (input[j][i] == b) isb = true;
//            }
//            if (isa && isb) return 1;
//        }
//    }
//    bool x = true;
//    bool y = true;
//    for (int i = 0; i < 3; i++){
//        if (input[i][i] != a && input[i][i] != b) x = false;
//        if (input[i][2 - i] != a && input[2 - i][i] != b) y = false;
//    }
//    if (x || y) return 1;
//    return 0;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> input[0] >> input[1] >> input[2];
//    set<char> set;
//    for (int i = 0; i < 3; i++){
//        for (int j = 0; j < 3; j++) set.insert(input[i][j]);
//    }
//
//    vector<char> players;
//    for (auto& i : set) players.push_back(i);
//    int a = 0;
//    int b = 0;
//    for (int i = 0; i < players.size() - 1; i++){
//        for (int j = i + 1; j < players.size(); j++){
//            a += solve(players[j], players[i]);
////            if (solve(players[j], players[i]) == 1) cout << players[i] << players[j] << "\n";
//        }
//        b += solve(players[i], players[i]);
//    }
//    b += solve(players[players.size() - 1], players[players.size() - 1]);
//    cout << b << "\n" << a;
//}