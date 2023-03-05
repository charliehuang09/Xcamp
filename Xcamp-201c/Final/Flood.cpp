//#include <iostream>
//#include <stdlib.h>
//#include<vector>
//using namespace std;
//int output = 1;
//vector<string> board;
//int dx[4] = {0,0,1,-1};
//int dy[4] = {1,-1,0,0};
//int length;
//bool inbounds(int x, int y){
//    if (x < 0){
//        return false;
//    }
//    if (y < 0){
//        return false;
//    }
//    if (x >= length){
//        return false;
//    }
//    if (y >= length){
//        return false;
//    }
//    return true;
//}
//void dfs(int x, int y){
//    board[x][y] = '|';
//    for (int i = 0; i < 4; i++){
//        if (inbounds(x + dx[i], y + dy[i]) == true){
//            if (board[x + dx[i]][y + dy[i]] == '_'){
//                output++;
//                dfs(x + dx[i],y + dy[i]);
//            }
//        }
//    }
//    return;
//}
//int main() {
//    int x,y;
//    cin >> length;
//    string temp;
//    for (int i = 0; i < length; i++){
//        cin >> temp;
//        board.push_back(temp);
//        for (int j = 0; j < length; j++){
//            if (board[i][j] == '*'){
//                x = i;
//                y = j;
//            }
//        }
//    }
//    dfs(x,y);
//    cout << output;
//}
///*
//4
//
//-_-*
//
//---_
//
//_---
//
//_---
//*/