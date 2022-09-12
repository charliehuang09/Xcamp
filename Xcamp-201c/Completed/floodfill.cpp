//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int length;
//vector<vector<int>> input;
//struct coord{
//    int x;
//    int y;
//};
//void print_vector (vector<vector <int>> input){
//    for (int x = 0; x < length; x++){
//        for (int y = 0; y < length; y++){
//            cout << input[x][y] << " ";
//        }
//        cout << "\n";
//    }
//}
//bool inbound(int corrd){
//    if (corrd >= length){
//        return false;
//    }
//    if (corrd == -1){
//        return false;
//    }
//    return true;
//}
//
//int lab( coord coord, int moves){
//    if (coord.x == length - 1 && coord.y == length - 1){
//        input[length - 1][length - 1] = 1;
//        return moves + 1;//found it!! :)
//    }
//    if (coord.x == -1 || coord.x == length){//x out of bound
//        return 0;
//    }
//    if (coord.y == -1 || coord.y == length){//y out of bound
//        return 0;
//    }
//    if (input[coord.x][coord.y] == 1){//not allowed move
//        return 0;
//    }
//    int up,down,right,left;//moves for going up down right left
//    input[coord.x][coord.y] = 1;//no going back
//    //up
//    coord.x--;
//    up = lab( coord, moves + 1);
//    coord.x++;
//    //down
//    coord.x++;
//    down = lab( coord, moves + 1);
//    coord.x--;
//    //right
//    coord.y++;
//    coord.x++;
//    right = lab( coord, moves + 1);
//    coord.x--;
//    coord.y--;
//    //left
//    coord.y--;
//    coord.x--;
//    left = lab( coord, moves + 1);
//    coord.x++;
//    coord.y++;
//    int list[4] = {up,left,right,down};
//    sort(list, list + 4);
//    if (up + left + right + down == 0){
//        return 0;
//    }
//    int x = 0;
//    while(list[x] == 0){
//        x++;
//    }
//    return list[x];
//}
///*
//5
//0 0 0 0 0
//0 1 1 1 0
//0 1 0 0 0
//0 1 0 1 0
//0 0 0 1 0
//*/
//
//int main() {
//    int a = 0, b = 0;
//    cin >> length;
//    int tempa,tempb;
//    cin >> tempa >> tempb;
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
//    coord start;//the starting coord is 0,0
//    start.x = tempa;
//    start.y = tempb;
//    for (int x = 0; x < length; x++){
//        for (int y = 0; y < length; y++){
//            if (input[x][y] == 1){
//                b++;
//            }
//        }
//    }
//    lab(start,0);//start with 0 moves
//    for (int x = 0; x < length; x++){
//        for (int y = 0; y < length; y++){
//            if (input[x][y] == 1){
//                a++;
//            }
//            //cout << input[x][y] << " ";
//        }
//        //cout << "\n";
//    }
//    cout << "\n" << a - b;
//
//
//}