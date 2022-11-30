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
//const int dx[8] = {0,0,1,-1, 1, 1, -1, -1};
//const int dy[8] = {1,-1,0,0, 1, -1, 1, -1};
//int n, m;
//string input[100000];
//
//bool inbound(int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= n) return false;
//    if (y >= m) return false;
//    return true;
//}
//
//int check(int x, int y, char b){
//    int out = 0;
//    for (int i = 0; i < 8; i++){
//        bool ok = true;
//        int newx = x;
//        int newy = y;
//        for (int j = 0; j < 2; j++){
//            newx += dx[i];
//            newy += dy[i];
//            if (!inbound(newx, newy)){
//                ok = false;
//                j = 2;
//            }
//            else if (input[newx][newy] != b){
//                ok = false;
//                j = 2;
//            }
//        }
//        if (ok) out++;
//    }
//    return out;
//}
//
//int solve(char a, char b){//m o
//    int out = 0;
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            if (input[i][j] == a){
//                out += check(i, j, b);
//            }
//        }
//    }
//    return out;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int output = 0;
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) cin >> input[i];
//
////    cout << solve('Q', 'M');
////    return 0;
//
//    for (int i = 'A'; i <= 'Z'; i++){
//        for (int j = 'A'; j <= 'Z'; j++){
//            if (i != j && i != 77 && j != 79) output = max(output, solve(i, j));
//        }
//    }
//    cout << output;
//}
///*
//4 6
//TAMHGI
//MMQVWM
//QMMQSM
//HBQUMQ
// */