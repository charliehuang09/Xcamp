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
//int queens;
//int size, output = 0;
//
//void print(vector<vector<bool>> input){
//    for (int i = 0; i < size; i++){
//        for (int j = 0; j < size; j++){
//            cout << input[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    cout << "\n";
//}
//
//bool inbound(int x, int y){
//    if (x < 0) return false;
//    if (y < 0) return false;
//    if (x >= size) return false;
//    if (y >= size) return false;
//    return true;
//}
//
//vector<vector<bool>> fill(vector<vector<bool>> board, int x, int y){
//    int newx, newy;
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx++;
//        newy++;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx--;
//        newy--;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx++;
//        newy--;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx--;
//        newy++;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newy++;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newy--;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx++;
//    }
//    newx = x;
//    newy = y;
//    while(inbound(newx, newy)){
//        board[newx][newy] = true;
//        newx--;
//    }
//    return board;
//}
//
//void dfs(vector<vector<bool>> board, int x, int y){
//    if (x == size - 1){
//        output++;
////        print(board);
//        return;
//    }
//    board = fill(board, x, y);
////    print(board);
////    cin.ignore();
//    for (int j = 0; j < size; j++){
//        if (!board[x+1][j]) dfs(board, x+1, j);
//    }
//}
//int main(){
//    cin >> size;
//    queens = size;
//    vector<vector<bool>> t(size,vector<bool>(size, false));
//    for (int i = 0; i < size; i++) dfs(t, 0, i);
//    cout << output;
//    return 0;
//}