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
//const int dx[4] = {0,0,1,-1};
//const int dy[4] = {1,-1,0,0};
//int input[10000][10000];
//int dp[10000][10000];
//int lengthx, lengthy, out=-1;
//
//struct coord{
//    int x;
//    int y;
//    coord(int x_, int y_){
//        x = x_;
//        y = y_;
//    };
//};
//
//void print(){
//    for (int i = 0; i < lengthx; i++){
//        for (int j = 0; j < lengthy; j++){
//            cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//bool inbound(int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= lengthx) return false;
//    if (y >= lengthy) return  false;
//    return true;
//}
//
//int dfs(int x, int y){
//    if (dp[x][y] != -1) return dp[x][y];
//    int output = 1;
//    for (int i = 0; i < 4; i++){
//        int newx = x + dx[i];
//        int newy = y + dy[i];
//        if (inbound(newx, newy) && input[x][y] > input[newx][newy]){
//            output = max(output, dfs(newx, newy) + 1);
//        }
//    }
//    dp[x][y] = output;
//    return output;
//}
//
//int main(){
//    cin >> lengthx >> lengthy;
//    memset(dp, -1, sizeof(dp));
//
//    for (int i = 0; i < lengthx; i++){
//        for (int j = 0; j < lengthy; j++){
//            cin >> input[i][j];
//        }
//    }
//
//    for (int i = 0; i < lengthx; i++){
//        for (int j = 0; j < lengthy; j++){
//            if (dp[i][j] == -1){
//                out = max(out, dfs(i, j));
////                print();
//            }
//        }
//    }
//    cout << out;
//}