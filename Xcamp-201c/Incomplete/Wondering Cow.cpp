////80 pts
////wrong answer
//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//using namespace std;
//struct coord{
//    int x;
//    int y;
//};
//int steps;
//coord start;
//coord finish;
//int colm,row;
//int output = 0;
//int dx[4] = {1,-1,0,0};
//int dy[4] = {0,0,1,-1};
//vector<string> board;
//void dfs(int x, int y,int moves){
//    if (abs(finish.y - y - 1) > steps - moves){
//      return;
//    }
//    if (abs(finish.x - x - 1) > steps - moves){
//      return;
//    }
//    if (moves == steps) {
//        if (x == finish.x-1 && y == finish.y-1){
//          //cout << "yay";
//          output++;
//          return;
//        }
//        //cout << "no " << endl;
//        return;
//    }
//  for (int i = 0; i < 4; i++){
//      //cout << "next x: " << x +dx[i] << " next y: " << y+dy[i] << endl;
//    if (x + dx[i] < colm && x + dx[i]>= 0 && y + dx[i] < row && y + dx[i] >= 0 && board[x+dx[i]][y+dy[i]] == '.'){
//        dfs( x + dx[i], y + dy[i], moves + 1);
//    } else {
//      //cout << "invalid next move, not moving" << endl;
//    }
//  }
//  return;
//
//}
//int main() {
//    cin >> colm >> row >> steps;
//    string temp1;
//    for (int x = 0; x < colm; x++){
//      cin >> temp1;
//      board.push_back(temp1);
//  }
//    cin >> start.x >> start.y;
//    cin >> finish.x >> finish.y;
//    dfs(start.x-1, start.y-1, 0);
//    cout << output;
//
//}
///*
//4 5 6
//...*.
//...*.
//.....
//.....
//1 3 1 5
// */
///*
// 20 20 15
// ..*.......**...*....
// ................**..
// ....*............*..
// ....**............*.
// ..*.................
// .....*..............
// .............*.**...
// ........*..*......**
// .............*.*.*..
// .....*........*.....
// .*..*....*..........
// *................*..
// ***.................
// .........*....*.....
// .......**...........
// ...........**.....*.
// ..*.*...............
// ....*......*........
// ....................
// ........*.......*...
// 18 11 18 10
// */