//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<vector<int>> fill(int x, int y, vector<vector<int>> input){
//    if (x == -1 || x == input.size()){//x out of bound
//        return input;
//    }
//    if (y == -1 || y == input[0].size()){//y out of bound
//
//        return input;
//    }
//    if (input[x][y] == 1 ||input[x][y] ==  2){//not allowed move
//        return input;
//    }
//    int up,down,right,left;//moves for going up down right left
//    input[x][y] = 2;//no going back
//    //up
//    input = fill(x - 1,y,input);
//    //down
//    input = fill(x + 1,y,input);
//    //right
//    input = fill(x,y - 1,input);
//    //left
//    input = fill(x,y + 1, input);
//    return input;
//}
///*
//3 0 0
//0 0 0
//0 1 0
//1 0 1
//*/
//
//int main() {
//  int col,row,tempa,tempb;
//  cin >> col >> row;
//  string temp;
//  vector<int> tempc;
//  vector<vector<int>> input;
//    int cine;
//    for (int x = 0; x < row; x++){
//      cin >> temp;
//      for (int y = 0; y < col; y++){
//        if (temp[y] == '@'){
//          tempa = x;
//          tempb = y;
//          tempc.push_back(0);
//        }
//        if (temp[y] == '.'){
//          tempc.push_back(0);
//        }
//        if (temp[y] == '#'){
//          tempc.push_back(1);
//        }
//      }
//      input.push_back(tempc);
//      tempc.clear();
//    }
//    input = fill(tempa,tempb, input);
//    int output = 0;
//    for (int x = 0; x < input.size(); x++){
//      for (int y = 0; y < input[x].size(); y++){
//        if (input[x][y] == 2){
//          output++;
//        }
//      }
//    }
//    cout << output;
//
//
//}