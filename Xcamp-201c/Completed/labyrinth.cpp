//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//vector<int> ways;
//int fill(int x, int y, vector<vector<int>> input, int times){
//    int length = input.size();
//    if (x == length - 1 && y == length - 1){
//        input[length - 1][length - 1] = 1;
//        ways.push_back(times);
//        return times;//found it!! :)
//
//
//    }
//    if (x == -1 || x == length){//x out of bound
//        return 2147483647;
//    }
//    if (y == -1 || y == length){//y out of bound
//
//        return 2147483647;
//    }
//    if (input[x][y] == 1){//not allowed move
//        return 2147483647;
//    }
//    int up,down,right,left;//moves for going up down right left
//    input[x][y] = 1;//no going back
//    int arr[4];
//    //up
//    arr[0] = fill(x - 1,y,input, times + 1);
//    //down
//    arr[1] = fill(x + 1,y,input, times + 1);
//    //right
//    arr[2] = fill(x,y - 1,input, times + 1);
//    //left
//    arr[3] = fill(x,y + 1, input, times + 1);
//    sort(arr, arr + 4);
//    return arr[0];
//}
///*
//3 0 0
//0 0 0
//0 1 0
//1 0 1
//*/
//
//int main() {
//  //input
//  //length, start x, start y
//  //The thing to flood
//  //0 = empty, 1 = filled
//  int length;
//  vector<vector<int>> input;
//    int a = 0, b = 0;
//    cin >> length;
//    int tempa,tempb;
//    vector<int> temp;
//    int cine;
//    for (int x = 0; x < length; x++){
//        for (int y = 0; y < length; y++){
//            cin >> cine;
//            temp.push_back(cine);
//        }
//        input.push_back(temp);
//        temp.clear();
//    }
//    // cout << "\n";
//
//      int as = fill(0,0, input, 0) + 1;//start with 0 moves
//      sort(ways.begin(), ways.end());
//      ways.push_back(-1);
//      int qwe = 0;
//      int x = 0;
//      while (ways[0] == ways[x]){
//        x++;
//      }
//      cout << x << "\n"  << ways[0] + 1;
//
//
//    // for (int x = 0; x < length; x++){
//    //   for (int y = 0; y < length; y++){
//    //     cout << input[x][y] << " ";
//    //   }
//    //   cout << "\n";
//    // }
//
//
//}