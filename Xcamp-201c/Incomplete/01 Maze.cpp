//#include <iostream>
//#include <vector>
//#include <stdio.h>
//using namespace std;
//int size;
//struct coord{
//  int x;
//  int y;
//};
//bool inbound(int x, int y, vector<vector<int>> input,int length,int state){
//    if (x == -1 || x == length){//x out of bound
//      return false;
//  }
//  if (y == -1 || y == length){//y out of bound
//      return false;
//  }
//  if (input[x][y] != state){//not allowed move
//      return false;
//  }
//  return true;
//}
//vector<vector<int>> fill(int x, int y, vector<vector<int>> input, int state){
//  //swap state
//  //state is now where you are allowed to move
//  int length = input.size();
//  // if (x == length - 1 && y == length - 1){
//  //     input[length - 1][length - 1] = 1;
//  //     return input;//found it!! :)
//  // }
//  // if (x == -1 || x == length){//x out of bound
//  //     return input;
//  // }
//  // if (y == -1 || y == length){//y out of bound
//  //     return input;
//  // }
//  // if (input[x][y] != state){//not allowed move
//  //     return input;
//  // }
//  if (state == 1){
//    state = 0;
//  }
//  else{
//    state = 1;
//  }
//  int up,down,right,left;//moves for going up down right left
//  input[x][y] = -1;//no going back
//  //up
//  if (inbound(x - 1, y,input,length,state) == true)
//    input = fill(x - 1,y,input, state);
//  //down
//  if (inbound(x + 1, y,input,length,state) == true)
//    input = fill(x + 1,y,input, state);
//  //right
//  if (inbound(x, y - 1,input,length,state) == true)
//    input = fill(x,y - 1,input, state);
//  //left
//  if (inbound(x, y + 1,input,length,state) == true)
//    input = fill(x,y + 1, input, state);
//  return input;
//}
///*
//2 2
//01
//10
//1 1
//2 2
//*/
//int main() {
//  int length,size;
//
//  scanf("%d %d", &size, &length);
//  // printf("%d %d\n", size, length);
//  vector<vector<int>> input;
//  vector<int> temp;
//  for (int i = 0; i < size; ++i) {
//    char inputs[size];
//    scanf("%s", inputs);
//    for (int j = 0; j < size; ++j)
//      if (inputs[j] == '0') {
//        temp.push_back(0);
//      } else {
//        temp.push_back(1);
//      }
//    input.push_back(temp);
//    temp.clear();
//  }
//  // for (int x = 0; x < size; x++){
//  //   scanf("%s", &arrs);
//  // }
//  // vector<int> temp;
//  // vector<vector<int>> input;
//  // for (int x = 0; x < size; x++){
//  //   for (int y = 0; y < size; y++){
//  //     if (arrs[x][y] == '0'){
//  //       temp.push_back(0);
//  //     }
//  //     else{
//  //       temp.push_back(1);
//  //     }
//  //   }
//  //   input.push_back(temp);
//  //   temp.clear();
//  // }
//  coord arr[length];
//  for (int x = 0; x < length; x++){
//    cin >> arr[x].x;
//    cin >> arr[x].y;
//    arr[x].x--;
//    arr[x].y--;
//  }
//  //cout << "\n\n\n\n\n\n";
//  int tout;
//  vector<vector<int>> output;
//  for (int x = 0; x < length; x++){
//    output = fill(arr[x].x, arr[x].y, input, input[arr[x].x][arr[x].y]);
//    // for (int y = 0; y < output.size(); y++){
//    //   for (int z = 0; z < output.size(); z++){
//    //     cout << output[y][z] << " ";
//    //   }
//    //   cout << "\n";
//    // }
//    tout = 0;
//    for (int y = 0; y < output.size(); y++){
//      for (int z = 0; z < output.size(); z++){
//        if (output[y][z] == -1){
//          tout++;
//        }
//      }
//    }
//    cout << tout << "\n";
//  }
//}
//
//
///*
//
//2 2
//01
//10
//1 1
//2 2
//  for (int x = 0; x < size; x++){
//    for (int y = 0; y < size; y++){
//      cout << input[x][y] << " ";
//    }
//    cout << "\n";
//  }
//*/