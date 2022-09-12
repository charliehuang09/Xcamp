//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <set>
//#include <stack>
//#include <map>
//#include <stdio.h>
//#include <stack>
//#include <stdlib.h>
//#include <queue>
//using namespace std;
//struct point_{
//    int x;
//    int y;
//};
//
//int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
//int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
//int boardx, boardy, startx, starty;
//
//bool inbound(point_ input){
//    if (input.x < 0){
//        return false;
//    }
//    if (input.y < 0){
//        return false;
//    }
//    if (input.x >= boardx){
//        return false;
//    }
//    if (input.y >= boardy){
//        return false;
//    }
//    return true;
//}
//
//int main() {
//    cin >> boardx >> boardy >> startx >> starty;
//    int board[boardx][boardy];
//    for (int i = 0; i < boardx; i++){
//        for (int j = 0; j < boardy; j++){
//            board[i][j] = -1;//qcheck
//        }
//    }
//
//    startx--;
//    starty--;
//
//    queue<point_> q;
//    point_ t;
//    t.x = startx;
//    t.y = starty;
//    q.push(t);
//
//    board[t.x][t.y] = 0;
//
//    while (!q.empty()){
//        point_ pt = q.front();
//        q.pop();
//
//        for (int i = 0; i < 8; i++){
//            point_ newpt = pt;
//            newpt.x += dx[i];
//            newpt.y += dy[i];
//            if (inbound(newpt)) {
//                if (board[newpt.x][newpt.y] == -1) {
//                    board[newpt.x][newpt.y] = board[pt.x][pt.y] + 1;
//                    q.push(newpt);
//                }
//                else if (board[newpt.x][newpt.y] > board[pt.x][pt.y] + 1) {
//                    board[newpt.x][newpt.y] = board[pt.x][pt.y] + 1;
//                    q.push(newpt);
//                }
//            }
//        }
//    }
//    for (int i = 0; i < boardx; i++){
//        for (int j = 0; j < boardy; j++){
//            cout << board[i][j] << " ";
//        }
//        cout << "\n";
//    }
//}