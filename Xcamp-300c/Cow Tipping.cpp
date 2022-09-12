//#include <iostream>
//#include <vector>
//#include <set>
//#include <cstring>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iomanip>
//#define ll long long
//using namespace std;
//const string albert = "Albert is a Furry\n";
//
//struct coord{
//    int x;
//    int y;
//};
//
//int length;
//
//bool x_valid(string input[], int x, int y){
//    for (int i = x; i >= 0; i--){
//        if (input[i][y] == '0'){
//            return false;
//        }
//    }
//    return true;
//}
//
//bool y_valid(string input[], int x, int y){
//    for (int i = y; i>= 0; i--){
//        if (input[x][i] == '0'){
//            return false;
//        }
//    }
//    return true;
//}
//
//coord get_coord(string input[], int x, int y){
//    while(x_valid(input, x - 1, y)){
//        x--;
//    }
//    while(x_valid(input, x, y - 1)){
//        y--;
//    }
//    coord output;
//    output.x = x - 1;
//    output.y = y - 1;
//    return output;
//}
//
//int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> length;
//    string input[length];
//    int flipped = 0;
//    for (int i = 0; i < length; i++){
//        cin >> input[i];
//        for (int j = 0; j < length; j++){
//            if (input[i][j] == '1'){
//                flipped++;
//            }
//        }
//    }
//    coord bound;
//    bound.x = length;
//    bound.y = length;
//    while(flipped > 0){
//        bound
//    }
//
//
//
//}